// Arrow functions allow us to write shorter function syntax:




// Before Arrow:
hello = function() {
  return "JAI MEHER BABA!";
}

let y = hello();
console.log(y);


// With Arrow Function:
hello = () => {
  return "Hello World!";
}

let x = hello();
console.log(x);


// Arrow Functions Return Value by Default:
hello = () => "JAI SHREE RAM!";
let m = hello();
console.log(m);

//****************************  OR  ******************************
let myFunction = (a, b) => a * b;
console.log(myFunction(2, 3));


// Arrow Function With Parameters:
hello = (val) => "Hello " + val;
let n = hello("ji")
console.log(n)