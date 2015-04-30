import { range } from "./util/range"

function add3or5(a, n){
    var m = (n % 3 === 0 || n % 5 === 0 ? n : 0);
    return a + m;
}

var s = range(0, 1000).reduce(add3or5, 0);
console.log(s);
