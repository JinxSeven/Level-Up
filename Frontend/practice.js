/*
var countSheep = function (num){
    var output = "";
    for (var x = 1; x <= num; x++) {
        output += x + " sheep...";
    }
    return output;
}

countSheep(0);
*/

/*
function powersOfTwo(n){
    var output = [1];
    if (n > 0) {
        for (var x = 1; x <= n; x++) {
            output.push(2 * output[x-1]);
        }
    }
    return output;
}

powersOfTwo(7);
*/

/*
function drawStairs(n) {
    for (var i = 0; i < n; i++) {
        var output = "";
        for (var j = 0; j < i; j++) {
            output += " "
        }
        output += "I"
        console.log(output);
    }
}

drawStairs(5);
*/

var name = prompt("Say you name boy");
var output = `Alright ${name}, get some work done`;
console.log(output)