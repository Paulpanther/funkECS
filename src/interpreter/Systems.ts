import {World} from "./World";
import {System} from "./Models";
import {Interpreter} from "./Interpreter";

export class Systems {
    private systems: System[] = [];

    constructor(
        private world = new World(),
        private interpreter: Interpreter
    ) {}

    public addSystem(system: System) {
        this.systems.push(system);
    }

    public executeAll() {
        for (const system of this.systems) {
            if (!system.preCondition || this.interpreter.evaluateExpression(system.preCondition)) {
                this.executeSystem(system);
            }

            if (!this.world.running) return;
        }
    }

    private executeSystem(system: System) {
        this.interpreter.evaluatePipelines(system.body);
    }
}
