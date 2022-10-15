class CustomStack {
    private stack: number[];
    private maxSize: number;

    public constructor(maxSize: number) {
        this.stack = [];
        this.maxSize = maxSize;
    }

    public push(x: number): void {
        this.stack.length < this.maxSize && this.stack.push(x);
    }

    public pop(): number {
        return this.stack.length ? this.stack.pop() : -1;
    }

    public increment(k: number, val: number): void {
        const it = k < this.stack.length ? k : this.stack.length;

        for(let i=0; i<it; i++) {
            this.stack[i] += val;
        }
    }
}
