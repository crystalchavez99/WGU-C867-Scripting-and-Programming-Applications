# 2.2 Programming Basics

## First Program
* Let's use an example, Simple C++ program appears:
  * `Program` starts in main(), execute statements within main's braces `{}`
  * Each statement appears alone on a line and ends with `semicolon`
  * have `int wage` statement that appears alone on line (declaration)
    * assign wage with `wage = 20`
  * `cout` statement output various values
  * `return 0 `statement ends program (0 tells os program has no error)
* `Code` is textual representation of a program
  *
```C++
#include <iostream>
using namespace std;

int main() {
  int wage;

  wage = 20;

  cout << "Salary is ";
  cout << wage * 40 * 52;
  cout << endl;

  return 0;
}
```

## Basic Input
* In C++, to get an input value and put that value in variable use this syntax
  * `cin >> x;`
  * `cin` is short for characters in
*

## Basic Output: Text
* `cout` constructs support outputs, short for characters out
  * Syntax is `cout << "text";`
* Text in double quotes is `string literal`
* Multiple cout statements print on the same output line
* `cout << endl;` starts a new output line called `newline`

## Output Variable Name
* Can be achieved via `cout << x;`

## Outputting multiple items with one statement
* Common use sinlge output statement for each line by combining output of text, var val, and new line
  * Simply seperates items with `<<`
```C++
#include <iostream>
using namespace std;

int main() {
   int wage;

   wage = 20;

   cout << "Wage is: " << wage << endl;
   cout << "Goodbye." << endl;

   return 0;
}
```
