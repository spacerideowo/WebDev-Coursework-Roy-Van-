#include <iostream>
#include <string>
#include "myString.h"

using namespace std;

int main()
{
    string str1, str2;
    int userChoice;
    char c;

    cout << myName() << endl;

    do{
      cout << "--------------------------------------------------------\n";
      cout << "Enter the number of the function you would like to test:\n";
      cout << "\t1. countChar()\n";
      cout << "\t2. countVowels()\n";
      cout << "\t3. countNumbers()\n";
      cout << "\t4. longestWord()\n";
      cout << "\t5. capitalizeWords()\n";
      cout << "\t6. changeCase()\n";
      cout << "\t7. reverseString()\n";
      cout << "\t8. isPalindrome()\n";
      cout << "\t9. isSubstring()\n";
      cout << "\t0. Exit Program\n";

      cin >> userChoice;
      cin.ignore(); // this is needed to mix cin with getline

      switch(userChoice){
         case 0:
            return 0;
         case 1:
            cout << "countChar() #1: " << countChar("aoeuaoeuaoeuaoeu", 'a') << endl; // 4
            cout << "countChar() #2: " << countChar("aoeuaoeuaoeuaoeu", 'A') << endl; // 0
            break;
         case 2:
            cout << "countVowels() #1: " << countVowels("aoeuaoeuaoeuaoeu") << endl; // 16
            cout << "countVowels() #2: " << countVowels("AYAYhhttnnao") << endl; // 6
            break;
         case 3:
            cout << "countNumbers() #1: " << countNumbers("a1b2  c3d!@4f0") << endl; // 5
            break;
         case 4:
            cout << "longestWord() #1: " << longestWord("aeouaua a aoeuuaTT_12") << endl; // 11
            break;
         case 5:
            cout << "capitalizeWords() #1: " << capitalizeWords("i like playing tic-tac-toe.\n");
            break;
         case 6:
            cout << "changeCase() #1: " << changeCase("cHANGE cASE pLEASE.\n");
            break;
         case 7:
            cout << "reverseString() #1: " << reverseString(".dlroW olleH") << endl;;
            break;
         case 8:
            cout << "isPalindrome('AbcbA') #1: " << isPalindrome("AbcbA") << endl;
            cout << "isPalindrome('233222') #2: " << isPalindrome("233222") << endl;
            break;
         case 9:
            cout << "isSubstring('ABCDE', 'BCD') #1: " << isSubstring("ABCDE","BCD") << endl;
            cout << "isSubstring('ABCDE', 'bcd') #2: " << isSubstring("ABCDE","bcd") << endl;
            break;
         default:
            cout << "Not a valid option.\n";
      }

    }while(userChoice != 0);



}
