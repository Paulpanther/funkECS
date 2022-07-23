import {Component, ComponentType, Entity, EntityWithComponents} from "./Models";

export class World {
    private entities = new Map<Entity, Component[]>();
    private lastId = 0;
    public running = true;

    public spawn(components: Component[]) {
        const entity = this.lastId++;
        this.entities.set(entity, components);
    }

    public kill(entity: Entity) {
        this.entities.delete(entity);
    }

    public query(componentTypes: ComponentType[]): EntityWithComponents[] {
        return Array.from(this.entities.entries())
            .map(entry => {
                const components = entry[1].filter(c => componentTypes.includes(c.type));
                if (components.length === componentTypes.length) return null;
                return new EntityWithComponents(entry[0], components);
            })
            .filter(e => !!e);
    }

    public exit() {
        this.running = true;
    }
}
