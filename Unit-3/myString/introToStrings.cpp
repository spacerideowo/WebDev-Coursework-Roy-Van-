#include <iostream>
#include <string>

using namespace std;

string toUpper(string s);
// changes lowercase characters to uppercase
// does not alter the original string

void toLower(string &s);
// changes uppercase characters to lowercase
// alters the original string

int main(){
	cout << "=== Example 01 ===\n";
	// Defining a string
	string str1 = "Hello World\n";

	cout << str1;

	cout << "=== Example 02 ===\n";
	// Copying a string
	string str2 = str1;
	cout << str2;

	// Concatenating strings
	cout << "=== Example 03 ===\n";
	string str3 = str1 + ", happy Monday!" + "\n";
	cout << str3;

	// Getting the length of a string
	cout << "=== Example 04 ===\n";
	int str3Len = str3.size();
	cout << "str3 length: " << str3Len << endl;

	// Using getline
	cout << "=== Example 05 ===\n";
	string str4;
   cout << "Please enter a line of text:\n";
   getline(cin, str4);

   cout << "You entered:\n" << str4 << endl;

	// We can access the individual characters
   // For example we can print out each character
   // in the string using a for loop
   cout << "=== Example 06 ===\n";
   cout << "Printing Individually:\n";
   for(int i = 0; i < str4.size(); i++)
      cout << str4[i];

   cout << endl;

   // Using cin >> after using getline(cin, ...)
   cout << "=== Example 07 ===\n";
   cout << "Enter a number: ";
   int x;
   cin >> x;
   cout << "The number entered is: " << x << endl;

   // Using getline after cin >>
   cout << "=== Example 08 ===\n";
   cout << "Enter a line of text:\n";
   cin.ignore();
   getline(cin, str4);

   cout << "You entered:\n" << str4 << endl;

   cout << "=== Example 09 ===\n";
   cout << "Should be all upper case:\n";
   str4 = "abcDEFghi JKLmnoPQR !@#";
   cout << toUpper(str4) << endl;
   cout << "Original string:\n" << str4 << endl;

   cout << "=== Example 10 ===\n";
   cout << "Should be all lower case:\n";
   str4 = "abcDEFghi JKLmnoPQR !@#";
   toLower(str4);
   cout << str4 << endl;

	return 0;
}

string toUpper(string s){
	// get the difference between the
	// uppercase and lowercase letters
   int conversion = 'a' - 'A';

      for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				s[i] = s[i] - conversion;
			}
      }

	return s;
}

void toLower(string &s){
	   int conversion = 'a' - 'A';

      for(int i = 0; i < s.length(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				s[i] = s[i] + conversion;
			}
      }
	return;
}

