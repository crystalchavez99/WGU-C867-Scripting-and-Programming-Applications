# 3.8 Scientific Notation

* `Scientific Notation` is writtin using e preceding power of 10 exponent
  * Ex: 6.02 x 10^23 can be written as 6.02e23
```C++
#include <iostream>
using namespace std;

int main() {
   double avogadrosNumber = 6.02e23; // Approximation of atoms per mole
   double gramsPerMoleGold = 196.9665;
   double gramsGold;
   double atomsGold;

   cout << "Enter grams of gold: ";
   cin  >> gramsGold;

   atomsGold = gramsGold / gramsPerMoleGold * avogadrosNumber;

   cout << gramsGold << " grams of gold contains ";
   cout << atomsGold << " atoms" << endl;

   return 0;
}
```
