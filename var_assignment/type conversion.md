# 3.12 Type Conversions
* `Type conversion` is a conversion of one data type to another
* Compiler auto performs several conversions, `implicit conversion`
  * For an arithmetic operator like + or *, if either operand is a double, the other is automatically converted to double, and then a floating-point operation is performed.
  * For assignments, the right side type is converted to the left side type.

## Type Casting
* A programmer needs to convert an item type
* `Type cast` explicitly converts a value of type to another type
* `Static cast` operator converts value to indicated type
  * Syntax: `static_cast<type>(expression)`
    * Example: `static_cast<double>(myIntVar)` int to double
```C++
#include <iostream>
using namespace std;

int main() {
   int kidsInFamily1;       // Should be int, not double
   int kidsInFamily2;       // (know anyone with 2.3 kids?)
   int numFamilies;

   double avgKidsPerFamily; // Expect fraction, so double

   kidsInFamily1 = 3;
   kidsInFamily2 = 4;
   numFamilies = 2;

   avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2)
                      / static_cast<double>(numFamilies);

   cout << "Average kids per family: " << avgKidsPerFamily << endl;

   return 0;
}
```
