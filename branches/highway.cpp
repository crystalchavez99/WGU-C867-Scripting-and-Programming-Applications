#include <iostream>
using namespace std;

int main() {
   int highwayNumber;

   cin >> highwayNumber;

   /* Type your code here. */

   if(highwayNumber > 0 && highwayNumber < 100){
      cout << "I-" << highwayNumber << " is primary,";
      if(highwayNumber % 2 == 0){
         cout << " going east/west." << endl;
      }else{
         cout << " going north/south." << endl;
      }
   }else if(highwayNumber > 99 && highwayNumber < 1000){
      if(highwayNumber % 100 == 0){
         cout << highwayNumber << " is not a valid interstate highway number." << endl;
      }else{
         cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayNumber % 100 << ",";
         if(highwayNumber % 2 == 0){
            cout << " going east/west." << endl;
         }else{
            cout << " going north/south." << endl;
         }
      }
   }else{
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }

   return 0;
}
