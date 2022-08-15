# 3.5 Airthmetic Expressions Int

```C++
#include <iostream>
using namespace std;

/* Computes the total cost of leasing a car given the down payment,
   monthly rate, and number of months
*/

int main() {
   int downPayment;
   int paymentPerMonth;
   int numMonths;
   int totalCost;  // Computed total cost to be output

   cout << "Enter down payment: ";
   cin  >> downPayment;

   cout << "Enter monthly payment: ";
   cin  >> paymentPerMonth;

   cout << "Enter number of months: ";
   cin  >> numMonths;

   totalCost = downPayment + (paymentPerMonth * numMonths);

   cout << "Total cost: " << totalCost << endl;

   return 0;
}
```

## Style: Single space around operators
* A good practice is to include a single space around operators for readability
  * Example: `totalMonthly = paymentPerMonth * numMonths;`

## Compound Operators
* Special operators called `compound operators` provide shorthand way to update a variable
  * Example: `userAge +=1` => `userAge = userAge + 1`
