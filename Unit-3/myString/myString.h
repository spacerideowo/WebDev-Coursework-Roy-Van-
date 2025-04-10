#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED

#include <string>
// avoid "using namespace std" in .h files instead use std::

std::string myName();
// Returns your name

int countChar(std::string s, char c);
// Returns the number of instances of character c in string s

int countVowels(std::string s);
// Returns the number of vowels in s
// Vowels: a, e, i, o, u, y
// Hint: consider both upper and lower case

int countNumbers(std::string s);
// Returns the number of integer characters 0,1,2,3,...,9 in string s

int longestWord(std::string s);
// find the length of the longest word in string s
// "The quick brown fox jumps over the lazy dog."
// Should return 5

std::string capitalizeWords(std::string s);
// write a function that capitalizes the first letter of each word.
// for this a word is defined as:
//    1. Any letter following a space ' ', hyphon '-' or a period '.'
//    2. If a letter is the first character of the string
// Example: "the left-handed brown fox jumps over the lazy dog. "
//    Becomes: "The Left-Handed Brown Fox Jumps Over The Lazy Dog."

std::string changeCase(std::string s);
// Changes uppercase to lowercase and lowercase to uppercase.
// Ignores whitespace and special characters.

std::string reverseString(std::string s);
// Returns s, but in reverse order
// For example: "Hello World" becomes "dlroW olleH"

bool isPalindrome(std::string s);
// Check to see if s is a palindrome

bool isSubstring(std::string s_full, std::string s_sub);
// Returns true if s_full contains the string s_sub
// Returns false otherwise

#endif // MYSTRING_H_INCLUDED
