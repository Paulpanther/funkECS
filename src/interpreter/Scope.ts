
export class Scope {
    private bindings = new Map<string, any>();

    constructor(
        public parent: Scope | undefined,
    ) {}

    public setValue(name: string, value: any) {
        this.bindings.set(name, value);
    }

    public getValue(name: string): any | undefined {
        return this.bindings.get(name) ?? this.parent?.getValue(name);
    }
}
