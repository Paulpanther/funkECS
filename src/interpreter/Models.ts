import {SyntaxNode} from "web-tree-sitter";

export class System {
    constructor(
        public name: string,
        public body: SyntaxNode,
        public preCondition?: SyntaxNode,
    ) {}
}

export type ComponentType = string

export class ComponentField {
    constructor(
        public name: string,
        public type: string,
    ) {}
}

export class Component {
    constructor(
        public type: ComponentType,
        public fields: ComponentField[]
    ) {}
}

export type Entity = number;

export class EntityWithComponents {
    constructor(
        public entity: Entity,
        public components: Component[],
    ) {
    }
}

