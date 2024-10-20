
## JavaScript Interview Questions and Answers

### 1. What is JavaScript?
**Answer:**
JavaScript is a high-level, interpreted programming language that is used to make web pages interactive. It runs on the browser and is an essential part of web development, especially in client-side scripting.

### 2. What are the key differences between `var`, `let`, and `const`?
**Answer:**

- **var**: Function-scoped, can be re-declared and updated. It has issues with hoisting.
- **let**: Block-scoped, cannot be re-declared but can be updated.
- **const**: Block-scoped, cannot be re-declared or updated. Variables declared with `const` must be initialized when declared.

### 3. Explain the concept of hoisting in JavaScript.
**Answer:**
Hoisting is JavaScript's default behavior of moving declarations to the top of the current scope (function or global). Only the declarations are hoisted, not the initializations.

```js
console.log(x); // undefined
var x = 5;
```

### 4. What are closures in JavaScript?
**Answer:**
A closure is a function that has access to its outer function’s scope, even after the outer function has returned. It allows a function to access variables from an enclosing scope.

```js
function outer() {
    let count = 0;
    return function inner() {
        count++;
        return count;
    };
}
const increment = outer();
console.log(increment()); // 1
```

### 5. What is the difference between `==` and `===` in JavaScript?
**Answer:**

- **== (loose equality)**: Compares values after type coercion, meaning different types can still be considered equal.
- **=== (strict equality)**: Compares both value and type, ensuring no type conversion happens.

```js
5 == '5'  // true
5 === '5' // false
```

### 6. What are arrow functions in JavaScript?
**Answer:**
Arrow functions are a shorter syntax for writing functions introduced in ES6. They do not have their own `this` or `arguments` object.

```js
const sum = (a, b) => a + b;
console.log(sum(2, 3)); // 5
```

### 7. What is the `this` keyword in JavaScript?
**Answer:**
The `this` keyword refers to the object it belongs to. It behaves differently depending on the context in which it’s used:

- In a method, `this` refers to the owner object.
- In a regular function, `this` refers to the global object (or `undefined` in strict mode).
- In arrow functions, `this` is lexically bound, meaning it refers to the `this` value from the surrounding context.

### 8. What is event delegation in JavaScript?
**Answer:**
Event delegation is a technique in which a single event listener is attached to a parent element and used to handle events for child elements. This improves performance, especially for dynamically added elements.

```js
document.getElementById('parent').addEventListener('click', function(e) {
    if (e.target && e.target.matches('button.class-name')) {
        // Handle button click
    }
});
```

### 9. What are promises in JavaScript?
**Answer:**
Promises are objects that represent the eventual completion or failure of an asynchronous operation. A promise can be in one of three states: pending, fulfilled, or rejected.

```js
const promise = new Promise((resolve, reject) => {
    // Async operation
    if (success) resolve('Success');
    else reject('Error');
});
promise.then(result => console.log(result)).catch(error => console.log(error));
```

### 10. What is the difference between synchronous and asynchronous JavaScript?
**Answer:**

- **Synchronous JavaScript**: Code is executed line by line, and each operation must complete before moving to the next.
- **Asynchronous JavaScript**: Operations can be performed in the background without blocking the execution of the rest of the code. Examples include `setTimeout`, promises, and `async/await`.

### 11. What is the use of `async` and `await` in JavaScript?
**Answer:**
The `async` keyword is used to define asynchronous functions, and `await` is used inside them to wait for the resolution of a promise.

```js
async function fetchData() {
    const response = await fetch('https://api.example.com/data');
    const data = await response.json();
    return data;
}
```

### 12. Explain prototypal inheritance in JavaScript.
**Answer:**
Prototypal inheritance allows objects to inherit properties and methods from other objects. Every object in JavaScript has a prototype, which is another object from which it can inherit properties.

```js
function Person(name) {
    this.name = name;
}
Person.prototype.greet = function() {
    console.log('Hello, ' + this.name);
};
const john = new Person('John');
john.greet(); // Hello, John
```

### 13. What is the difference between `null` and `undefined`?
**Answer:**

- **undefined**: A variable that has been declared but not assigned a value.
- **null**: Represents the intentional absence of any object value.

### 14. What is the difference between `map()`, `forEach()`, and `filter()`?
**Answer:**

- **map()**: Creates a new array by applying a function to each element of the original array.
- **forEach()**: Executes a function on each element, but does not return a new array.
- **filter()**: Creates a new array with elements that pass the given condition.

### 15. What is the difference between deep copy and shallow copy in JavaScript?
**Answer:**

- **Shallow Copy**: Copies only the top-level properties. If the property is an object, both the original and the copy will reference the same object.
- **Deep Copy**: Recursively copies all nested objects, creating completely independent copies.

```js
const obj = { a: 1, b: { c: 2 } };
const shallowCopy = { ...obj };
const deepCopy = JSON.parse(JSON.stringify(obj));
```

### 16. Explain the concept of “callback hell.”
**Answer:**
Callback hell refers to a situation where multiple nested callbacks make code difficult to read and maintain. It often occurs in asynchronous programming when many tasks need to be done in sequence. Promises and `async/await` help mitigate this issue.

### 17. What is the event loop in JavaScript?
**Answer:**
The event loop is a mechanism that allows JavaScript to perform non-blocking operations by using callbacks, promises, or `async/await`. It continuously checks the message queue and executes tasks such as asynchronous events or functions when the call stack is empty.

### 18. What is destructuring in JavaScript?
**Answer:**
Destructuring is a syntax that allows you to unpack values from arrays or properties from objects into distinct variables.

```js
const [a, b] = [1, 2];
const { name, age } = { name: 'John', age: 30 };
```

### 19. What is the difference between `apply()`, `call()`, and `bind()`?
**Answer:**

- **call()**: Calls a function with a specific `this` value and arguments provided individually.
- **apply()**: Calls a function with a specific `this` value and arguments provided as an array.
- **bind()**: Returns a new function with a specific `this` value and optionally sets arguments.

### 20. What is the use of `try...catch` in JavaScript?
**Answer:**
`try...catch` is used to handle errors in JavaScript. Code in the `try` block is executed, and if an error occurs, control is passed to the `catch` block, which handles the error.