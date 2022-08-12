# 2.3 Comments and Whitespace

## Comments
* `Comment` is text programmers add to code for users to read and ignored by compiler
* Two kinds of comments:
  * `Single-line` starts with `//` and includes text on that line
  * `Multi-line` starts with `/*` and ends with `*/`, where text betwen them which is known as `block comment`
```C++
#include <iostream>
using namespace std;

/*
 This program calculates the amount of pasta to cook, given the
 number of people eating.

 Author: Andrea Giada
 Date:   May 30, 2017
*/

int main() {
   int numPeople;         // Number of people that will be eating
   int totalOuncesPasta;  // Total ounces of pasta to serve numPeople

   // Get number of people
   cout << "Enter number of people: " << endl;
   cin  >> numPeople;

   // Calculate and print total ounces of pasta
   totalOuncesPasta = numPeople * 3;  // Typical ounces per person
   cout << "Cook " << totalOuncesPasta << " ounces of pasta." << endl;

   return 0;
}
```

## Whitespace
* `Whitespace` refers to blank spaces between items
* use whitespace to make a program more readable
```C++
#include <iostream>
using namespace std;

int main() {
   int myFirstVar;    // Aligned comments yield less
   int yetAnotherVar; // visual clutter
   int thirdVar;

   // Above blank line separates variable declarations from the rest
   cout << "Enter a number: ";
   cin  >> myFirstVar;

   // Above blank line separates user input statements from the rest
   yetAnotherVar = myFirstVar;        // Aligned = operators
   thirdVar      = yetAnotherVar + 1;
   // Also notice the single-space on left and right of + and =
   // (except when aligning the second = with the first =)

   cout << "Final value is " << thirdVar << endl; // Single-space on each side of <<

   return 0; // The above blank line separates the return from the rest
}
```
