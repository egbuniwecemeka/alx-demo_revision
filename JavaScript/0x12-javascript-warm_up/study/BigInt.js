// False because BigInt allows for integers above the safe limit
const x = BigInt(Number.MAX_SAFE_INTEGER);
console.log(x + 1n === x + 2n);

// True because of JavaScripts limitation of floating-point arithmetic
// both calculations result in the same value
console.log(Number.MAX_SAFE_INTEGER + 1 === Number.MAX_SAFE_INTEGER + 2)