function* fibonnaci(){
    let a = 0, b = 1;
    while(1){
       let c = b;
       b += a
       yield a;
       a = c;
    }
}

var fib = fibonnaci();
var s = 0;
var f;
while((f = fib.next().value) < 4e6){
    if(f % 2 === 0){
        s += f;
    }
}
console.log(s);
