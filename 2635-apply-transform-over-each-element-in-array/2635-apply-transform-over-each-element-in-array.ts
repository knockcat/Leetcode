function map(arr: number[], fn: (n: number, i: number) => number): number[] {
    
    const mp : number[] = [];
    
    for(var i = 0; i < arr.length; ++i)
        mp.push(fn(arr[i],i));
    
    return mp;
};