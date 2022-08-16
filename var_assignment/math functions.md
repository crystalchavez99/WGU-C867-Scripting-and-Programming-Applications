# 3.10 Math Functions

## Basics
* `Math library` has about 20 math operations, known as functions which we can include and use
* `function` is a list of statements executed by inokin function name known as `function call`
* funcion input or `arguments` within (), seperated by commas
* Example:
```C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double sideSquare;
   double areaSquare = 49.0;

   sideSquare = sqrt(areaSquare);

   cout << "Square root of " << areaSquare
        << " is " << sideSquare << endl;

   return 0;
}
```
* List of math functions:
  * sqrt(x)
  * pow(x, y) => x ^ y
  * fabs(x) abs value of x (neg to pos)
* [Math Functions](https://cplusplus.com/reference/cmath/)

## Call in arguments
* A function's call argument itself includes a function call
* Look at the example, we see
```C++
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;

   x = 3.0;
   y = 2.0;
   z = pow(2.0, pow(x, y) + 1);

   return 0;
}
```
