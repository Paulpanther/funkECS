export class Scope {
  private bindings = new Map<string, any>();
  private _last: any;

  constructor(public parent: Scope | null) {}

  public setValue(name: string, value: any) {
    this.bindings.set(name, value);
  }

  public getValue(name: string, notFound: () => void): any {
    if (this.bindings.has(name)) return this.bindings.get(name);
    if (!this.parent) return notFound();
    return this.parent?.getValue(name, notFound);
  }

  public set last(v: any) {
    this._last = v;
  }

  public get last(): any {
    return this._last ?? this.parent?.last;
  }
}
