function factorial(n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

let a = prompt("Enter a number to get its FACTORIAL:");
a = Number(a); // Convert the input to a number

console.log(factorial(a));


confirm("ARE YOU A MATHEMATICIAN ?");
