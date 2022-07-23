import { World } from "./World";
import { System } from "./Models";
import { Interpreter } from "./Interpreter";
import { expectBoolean } from "./util";
import { Scope } from "./Scope";

export class Systems {
  private systems: System[] = [];

  constructor(private world = new World(), private interpreter: Interpreter) {}

  public addSystem(system: System) {
    this.systems.push(system);
  }

  private getGlobalScope() {
    // FIXME store reference?
    return new Scope(null);
  }

  public executeAll() {
    for (const system of this.systems) {
      // TODO boolean check for return val of precondition
      if (
        !system.preCondition ||
        expectBoolean(
          this.interpreter.evaluateExpression(
            system.preCondition,
            this.getGlobalScope()
          ),
          `precondition of ${system.name} does not return a boolean`
        )
      ) {
        this.executeSystem(system);
      }

      if (!this.world.running) return;
    }
  }

  private executeSystem(system: System) {
    this.interpreter.evaluatePipelines(system.body, this.getGlobalScope());
  }
}
