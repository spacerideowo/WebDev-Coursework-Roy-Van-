#include <iostream>
#include "secret.h"

using namespace std;

int main(){
    // Test 1: Cleaning the String
    cout << "Test 1: Cleaning the string: ";
    if(cleanString("Hello World! Happy Wednesday! :)") == "HELLOWORLDHAPPYWEDNESDAY")
        cout << "Pass\n";
    else
        cout << "Fail\n";

    // Test 2: Caesar Encode
    cout << "Test 2: Encoding the string: ";
    if(caesarEncode("HELLOWORLDHAPPYWEDNESDAY", 'F') == "MJQQTBTWQIMFUUDBJISJXIFD")
        cout << "Pass\n";
    else
        cout << "Fail\n";

    // Test 3: Caesar Decode
    cout << "Test 3: Decoding the string: ";
    if(caesarDecode("MJQQTBTWQIMFUUDBJISJXIFD", 'F') == "HELLOWORLDHAPPYWEDNESDAY")
        cout << "Pass\n";
    else
        cout << "Fail\n";

    // General Test
    cout << "General Test: ";
    string original = "SECRETMESSAGE";
    char key = 'F';
    string encoded = caesarEncode(original, key);
    string decoded = caesarDecode(encoded, key);

    if(original == decoded)
        cout << "Pass\n";
    else
        cout << "Fail\n";

    return 0;
}
