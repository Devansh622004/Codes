// The map() loop in JavaScript is a higher-order array method used to create a new array by applying a function to each element of an existing array. It does not modify the original array but returns a new array based on the transformation provided.

// Key Characteristics:
// Iterates over each element in an array.
// Applies a function to each element.
// Returns a new array containing the results of applying that function.
// Does not modify the original array.



// Syntax:
// javascript
// Copy code
// let newArray = array.map(function(currentValue, index, array) {
//   // return transformed value
// });
// currentValue: The current element being processed in the array.
// index (optional): The index of the current element.
// array (optional): The original array.



// Case 1: Transforming Array Elements
let numbers = [1, 2, 3, 4];
let doubledNumbers = numbers.map(function(num) {
  return num * 2;
});

console.log(doubledNumbers); // [2, 4, 6, 8]


// Case 2: Extracting Property Values from an Array of Objects
let users = [
  { name: "Alice", age: 25 },
  { name: "Bob", age: 30 },
  { name: "Charlie", age: 35 }
];

let names = users.map(user => user.name);

console.log(names); // ["Alice", "Bob", "Charlie"]



// Case 3: Converting Data Types
let strings = ["1", "2", "3"];
let number = strings.map(str => Number(str));

console.log(numbers); // [1, 2, 3]