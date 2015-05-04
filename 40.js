function Champ(n){
  var accumulator = 0, counter = 0, index = 0;
  var s = '';
  while(counter < n){
    index++;
    s = '' + index;
    accumulator += index;
    if(counter + s.length >= n){
      return +s.charAt(n - (counter + 1));
    }
    counter += s.length;
  }
}

var acc = 1;
for(var i = 0; i < 6 ; i++){
  acc *= Champ(Math.pow(10, i));
}

console.log(acc);
