# 3.9 Constant Variable

* An initialized variable whose valye cannot change is called `constant variable`
```C++
#include <iostream>
using namespace std;

/*
 * Estimates distance of lightning based on seconds
 * between lightning and thunder
 */

int main() {
   const double SPEED_OF_SOUND   = 761.207; // Miles/hour (sea level)
   const double SECONDS_PER_HOUR = 3600.0;  // Secs/hour
   double secondsBetween;
   double timeInHours;
   double distInMiles;

   cout << "Enter seconds between lightning and thunder: ";
   cin  >> secondsBetween;

   timeInHours = secondsBetween / SECONDS_PER_HOUR;
   distInMiles = SPEED_OF_SOUND * timeInHours;

   cout << "Lightning strike was approximately" << endl;
   cout << distInMiles << " miles away." << endl;

   return 0;
}
/*
Enter seconds between lightning and thunder: 7
Lightning strike was approximately
1.48012 miles away.

...

Enter seconds between lightning and thunder: 1
Lightning strike was approximately
0.211446 miles away.
*/
```
