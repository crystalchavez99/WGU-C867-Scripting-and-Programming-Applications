# 4.2 Detecting equal values with branches
* A program commonly needs to determine if two items are equal.
* An `if` statement executes a group of statements if an expression is true.
* `Braces` surround the if branch's statements
  * `Braces` { }, sometimes redundantly called curly braces, represent a grouping, such as a grouping of statements.
* The `equality operator (==)` evaluates to true if the left and right sides are equal.

## Equality and inequality operators
* the `inequality operator (!=)` evaluates to true if the left and right sides are not equal, or different.
* An expression involving the equality or inequality operators evaluates to a Boolean value. A `Boolean` is a type that has just two values: true or false.

## If-else statement
* An `if-else` statement executes one group of statements when an expression is true, and another group of statements when the expression is false.

## Multi-branch if-else statements
* a program may need to detect several specific values of a variable. An If-else statement can be extended to have three (or more) branches.
```C++
if (expression1) {
   // Statements that execute when expression1 is true
   // (first branch)
}
else if (expression2) {
   // Statements that execute when expression1 is false and expression2 is true
   // (second branch)
}
else {
   // Statements that execute when expression1 is false and expression2 is false
   // (third branch)
}
```

## Comparing characters, strings, and floating-point types
*  The relational and equality operators work for integer, character, and floating-point built-in types. 
