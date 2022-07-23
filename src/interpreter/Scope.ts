export class Scope {
  private bindings = new Map<string, any>();
  public last: any;

  constructor(public parent: Scope | null) {}

  public setValue(name: string, value: any) {
    this.bindings.set(name, value);
  }

  public getValue(name: string, notFound: () => void): any {
    if (this.bindings.has(name)) return this.bindings.get(name);
    if (!this.parent) return notFound();
    return this.parent?.getValue(name, notFound);
  }
}
