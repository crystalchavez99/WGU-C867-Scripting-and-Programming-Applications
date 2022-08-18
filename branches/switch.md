# 4.11 Switch Statements

## Switch
* A `switch` statement can more clearly represent multi-branch behavior involving a variable being compared to constant values.
* program executes the first `case` whose constant expression matches the value of the switch expression, executes that case's statements, and then jumps to the end.
  * If no case matches, then the `default case` statements are executed.
```C++
switch (userVal) {
   case 1:
      numItems = 5;
      break;

   case 3:
      numItems = 12;
      break;

   case 4:
      numItems = 99;
      break;

   default:
      numItems = 55;
      break;
}
```

## Switch statement general form
* The switch statement's expression should be an integer or char. The expression should not be a string or a floating-point type.
* Each case must have a constant expression like 2 or 'q'; a case expression cannot be a variable.
```C++
switch (expression) {
   case constantExpr1:
      // Statements
      break;

   case constantExpr2:
      // Statements
      break;

   ...

   default: // If no other case matches
      // Statements
      break;
}
```

## Omitting the break statement
* Omitting the `break` statement for a case will cause the statements within the next case to be executed.
* Always add a break statement
* If you forget a break statement, it will go to the next case until break is shown
* 
