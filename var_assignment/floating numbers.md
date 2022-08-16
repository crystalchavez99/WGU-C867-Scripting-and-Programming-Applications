# 3.7 Floating-Point Numbers (double)

# Floating-point (double) variables
* `Floating-point number` is real number is a real number containing a decimal point that can appear anywhere in the number
* A `double` variable stores a floating point number
  * Example: `double milesTravel;`
* `Floating point literal` is a number with a fractional part
```C++
#include <iostream>
using namespace std;

int main() {
   double milesTravel; // User input of miles to travel
   double hoursFly;    // Travel hours if flying those miles
   double hoursDrive;  // Travel hours if driving those miles

   cout << "Enter miles to travel: ";
   cin  >> milesTravel;

   hoursFly   = milesTravel / 500.0; // Plane flies 500 mph
   hoursDrive = milesTravel / 60.0;  // Car drives 60 mph

   cout << milesTravel << " miles would take:" << endl;
   cout << "   " << hoursFly << " hours to fly" << endl;
   cout << "   " << hoursDrive << " hours to drive" << endl;

   return 0;
}
```

## Choosing double or int
* Based on value head type
  * Integer for values that are counted
  * Floating used for measurements
  * Floating used with fractionable items

## Floating point division by zero
* Dividing a nonzero float by zero is undefined
  * C++ handles it return `infinity` or `-infinity`
* If dividen and divisor are both 0, results in `NaN`

## Manipulating floating-point output
* A common approach is to output floating-point numbers with a specific number of digits after the decimal to reduce complexity or produce a certain numerical type
* Use method `setPrecision(amount)`
  *  `setprecision()` is found in the iomanip library. `fixed `and `setprecision() `are manipulators that need only be written once if the desired
     * Example: `cout << fixed << setprecision(3) << 3.1244 << endl;`
