# 3.11 Int divide and modulo

## Division: Int rounding
* When the operands of `/` are ints, operator performs int division, which does not generate any fraction

## Division: Divide by 0
* `A divide by zero error` occurs at runtime if divisor is 0, causing program to terminate
  * Example of a `runtime error`, severe error that occurs at runtime and causes program to terminate early

## Modulo
* `Modulo Operator %` evaluates the remainder of the division of two integer
  * Example: `23 % 10 = 3;`
* Works only on integers, not float (double)

## Modulo Examples
* Modulo has several usesful applications
* Examples:
    1. Given a random number randNum, % can generate a random number within a range:
       1. `randomNum % 10` (ranges: 0 - 9) any number can be used of course
    2. Getting digits, % and / can be used to get each digit
       1. `onesDigit     = userVal % 10; `   // Ex: 927 % 10 is 7.
          `tmpVal        = userVal / 10;`
