function show(t) {
  if (t <= 0) return t;

  console.log("hi : ", t);
  t--;
  show(t);
}
let t = 6;

show(t);
