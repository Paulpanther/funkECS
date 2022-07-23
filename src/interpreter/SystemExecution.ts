import {World} from "./World";

class PreCondition {
    public evaluate(): boolean {
        return true;
    }
}
class System {
    public preCondition?: PreCondition;
}

export class SystemExecution {
    private systems: System[];
    private world = new World();

    public executeAll() {
        for (const system of this.systems) {
            if (system.preCondition?.evaluate() !== false) {
                this.executeSystem(system);
            }

            if (!this.world.running) return;
        }
    }

    private executeSystem(system: System) {

    }
}
