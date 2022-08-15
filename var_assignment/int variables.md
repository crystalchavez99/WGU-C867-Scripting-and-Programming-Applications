# 3.2 Int Variable

## Variable Declaration

* `Variable declaration` is statement that declares a new variable with a name and type
  * Example: `int userAge;`
* Compiler ensures to store in memory for future use of that file
* The programmer must declare a variable before any statement that assigns or reads the variable, so that the variable's memory location is known.

## Assignment Statements
* `Assignment statement` assigns variable on the left side of `=` and current value on right side
  * Example:  `numApples = 8;`
* `Expression` may be a number, which a number in an expression is a `integer literal`
```C++
#include <iostream>
using namespace std;

int main() {
   int litterSize;
   int yearlyLitters;
   int annualMice;

   litterSize    = 3; // Low end of litter size range
   yearlyLitters = 5; // Low end of litters per year

   cout << "One female mouse may give birth to ";
   annualMice = litterSize * yearlyLitters;
   cout << annualMice << " mice," << endl;

   litterSize    = 14; // High end
   yearlyLitters = 10; // High end

   cout << "and up to ";
   annualMice = litterSize * yearlyLitters;
   cout << annualMice << " mice, in a year." << endl;

   return 0;
}
```

## Initializing Variables
* Not required, interger variable is often assigned an inital value when declared
  * Example: `int maxScore = 100;`

## Assignment Statement with same variable on both sides
* A variable appears on both left and right side of the `=` opertor
  * Example: `numItems = numItems + 1;`

## Common errors
* `Common error` is to read a variable that has not been assgined a value yet
  * Programmer must ensure to assign a varaible a value before reading
* Another `common error` is writing an assignment statement in reverse
