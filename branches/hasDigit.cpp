#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   bool hasDigit;
   string passCode;

   hasDigit = false;
   cin >> passCode;

   /* Your solution goes here  */
   if(isdigit(passCode.at(0))){
      hasDigit = true;
   }else if(isdigit(passCode.at(1))){
       hasDigit = true;
   }else if(isdigit(passCode.at(2))){
       hasDigit = true;
   }else{
      hasDigit = false;
   }

   if (hasDigit) {
      cout << "Has a digit." << endl;
   }
   else {
      cout << "Has no digit." << endl;
   }

   return 0;
}
