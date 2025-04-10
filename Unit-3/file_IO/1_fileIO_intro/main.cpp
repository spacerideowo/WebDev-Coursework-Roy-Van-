/* Introductory program for file input ond output
   Note: to keep this simple, no error checking is performed */

#include <iostream>
#include <fstream>  // the file stream (input/output) library

using namespace std;

int main()
{
   // create the input and output file streams
   ifstream inputStream;
   ofstream outputStream;
   int countdownStart;

   // open the input file. Note for this example "sample.txt"
   // only contains a single positive integer
   inputStream.open("integer.txt");

   // open the output file (this will be created if it does not exist
   outputStream.open("countDown.txt");

   // grab the first word
   inputStream >> countdownStart;

   // output the countdown
   outputStream << countdownStart;

   for(int i = countdownStart - 1; i >= 0; i--)
      outputStream << ',' << i ;

   outputStream << endl;

   // close the input and output files
   inputStream.close();
   outputStream.close();

   cout << "Countdown from " << countdownStart << " complete" << endl;
   return 0;
}
