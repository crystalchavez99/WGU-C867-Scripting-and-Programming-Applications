# 4.14 String access operations

## String character indices
* A string is a sequence of characters in memory. Each string character has a position number called an index, starting with `0` (not 1).

## Accessing string characters
* `at()`: The notation someString.at(x) accesses the character at index x of a string.
```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
   string userWord;

   cout << "Enter a 5-letter word: ";
   cin  >> userWord;

   cout << "Scrambled: ";
   cout << userWord.at(3);
   cout << userWord.at(1);
   cout << userWord.at(4);
   cout << userWord.at(0);
   cout << userWord.at(2);
   cout << endl;

   return 0;
}
```

## Changing a character in a string
* A character in a string can be assigned. If userString is "abcde", then `userString.at(3) = 'X'` yields `"abcXe"`.

## Working with the end of a string
*  The function s1.`size()` returns s1's length
   *  the last character is at index `length - 1`
* A common task is to append (add to the end) a string to an existing string.
  * `s1.append(s2)` appends string s2 to string s1
