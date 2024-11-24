function factorial(t) {
  let fact = 1;
  if (t == 0 || t == 1) return 1;

  //   fact = t * factorial(t - 1);
  //   return fact;
  return t * factorial(t - 1);
}
let t = 5;

let ans = factorial(t);
console.log(ans);
