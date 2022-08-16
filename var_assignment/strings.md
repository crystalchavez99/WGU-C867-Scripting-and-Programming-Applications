# 3.15 Strings

## Strings and String Literals
* `string` is a sequence of characters
* `string literal` surrounds character sequence with double quotes

## String var and assignments
* String data type isnt built into C++, it is available in the standard library and can be used after including `#include <string>`
* Declare a string var as: `string firstName;`
* Initialization: `string firstMonth = "January";`, otherwise empty string if no value

## Get string without whitespaces from input
* `whitespace character` is used to represent spaces in text
* Once a whitespace hits, it'll only accept the word prior to the first whitespace

## Getting a string with whitespace from input
* Sometimes a programmer wishes to get whitespace characters into a string
* The function `getline(cin, stringVar)` gets all remaining text on the current input line, up to the next newline character

## Mixing cin and getline
* Mixing cin >> and getline() can be tricky, because cin >> leaves the newline in the input, while getline() does not skip leading whitespace. 
