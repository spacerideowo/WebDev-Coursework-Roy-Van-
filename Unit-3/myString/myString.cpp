/* ================================================================================================
Name: Roy Van
Date: March 2025
=================================================================================================*/

#include <string>

using namespace std;

/* --------------------------------------------------------------------------------------------- */

std::string myName(){
   return "RoyVan";
}

/* --------------------------------------------------------------------------------------------- */

int countChar(std::string s, char c){
    int a = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c) a++;
    }
    return a;
}

/* --------------------------------------------------------------------------------------------- */

int countVowels(std::string s){
    int v = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            v++;
    }
    return v;
}

/* --------------------------------------------------------------------------------------------- */

int countNumbers(std::string s){
    int n = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] <= '9' && s[i] >= '0') n++;
    }
    return n;
}

/* --------------------------------------------------------------------------------------------- */

int longestWord(std::string s){
    int maxLength = 0, currentLength = 0;
    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            currentLength++;
        }else{
            if(currentLength > maxLength)
                maxLength = currentLength;
            currentLength = 0;
        }
    }
    if(currentLength > maxLength)
        maxLength = currentLength;
    return maxLength;
}

/* --------------------------------------------------------------------------------------------- */

std::string capitalizeWords(std::string s){
    bool newWord = true;
    for(int i = 0; i < s.length(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') && newWord){
            s[i] -= 32;
            newWord = false; // Turn off the flag to track new words
        }else if(s[i] == ' ' || s[i] == '-' || s[i] == '.'){
            newWord = true;
        }
    }
    return s;
}

/* --------------------------------------------------------------------------------------------- */

std::string changeCase(std::string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    return s;
}

/* --------------------------------------------------------------------------------------------- */

std::string reverseString(std::string s){
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
    return s;
}

/* --------------------------------------------------------------------------------------------- */

bool isPalindrome(std::string s){
    int left = 0; int right = s.length() - 1;
    while(left < right){
        if(s[left] != s[right])
            return false;
        left++; right--;
    }
    return true;
}

/* --------------------------------------------------------------------------------------------- */

bool isSubstring(std::string s_full, std::string s_sub){
    int n = s_full.length(), m = s_sub.length();
    if(m > n) return false;  // Substring longer than original string, return false.

    for(int i = 0; i <= n - m; i++){
        bool match = true;  // Assume current position matches
        for(int j = 0; j < m; j++){
            if(s_full[i + j] != s_sub[j]){
                match = false;  // If any letter does not match, terminate comparing.
                break;
            }
        }
        if(match) return true;
    }
    return false;  // Does not find match after the traversal, return false.
}

/* --------------------------------------------------------------------------------------------- */
