function Collatz(n){
  if(! collatz[n]){
    if(n == 1){
      collatz[n] = 1;
    } else if(n % 2 === 0){
      collatz[n] = 1 + Collatz(n / 2);
    } else {
      collatz[n] = 1 + Collatz(3 * n + 1);
    }
  }
  return collatz[n];
}

var maxI;
var collatz = [];
var max = Number.MIN_SAFE_INTEGER

for(var i = 1 ; i <= 1e6; i++){
    var c = Collatz(i);
    if(c > max){
      max = c;
      maxI = i;
    }
}
