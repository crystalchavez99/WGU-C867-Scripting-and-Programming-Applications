# 4.15 Character operations
* Including the `cctype` library via `#include <cctype> `provides access to several functions for working with characters.
* `ctype` stands for character type
* `isalpha(c)` checks if alphabetic
* `isdigit(c)` check if number
* `isspace(c)` check if whitespace
* `toupper(c)` uppercase verson
* `tolower(c)` lowercase version

## 4.16 More string operations

## Finding in a string / Getting a substring
* `string.find(c)`  returns index of first item occurrence, else else returns string::npos
* `string.substr(index, length)` returns substring starting at index and having length characters

## Combining / Replacing
* `push_back(c)` appends c to the end of string
* `insert(ind,subStr)` inerts string at index
* `replace(indx,num,subStr)` replaces characters at index indx to indx + num - 1 with copy of subtr
* `str1 + str2` returns a new string copy of str1 and str2 together

