#include <iostream>
using namespace std;

int main() {
   int awardPoints;
   int userTickets;

   cin >> userTickets; // Program will be tested with values: 6, 7, 8, 9.

   /* Your code goes here */
   if(userTickets != 7){
      awardPoints = 10;
   }else{
      awardPoints = userTickets;
   }

   cout << awardPoints << endl;

   return 0;
}
