/* Program demonstrates simple error checking of an input file
  Note: to keep this simple only the first word is read from the file */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   // declare the input stream
   ifstream inputStream;

   string inputFilename, sampleText;

   // prompt the user for a file name then attempt to open it
   do{
      cout << "Filename: ";
      cin >> inputFilename;
      inputStream.open(inputFilename);
      // the stream variables (input or output) evaluate as:
         //    true if the file operation was successful
         //    false if the last file operation failed
      if(!inputStream)
         cout << "Error opening file - Please try again\n";
   }while(!inputStream);

   // get the first string from the file
   inputStream >> sampleText;

   // check if the read succeeded
   if (!inputStream){
      cout << "Could not read the sample text." << endl;
      return 1;
   }else{
     cout << "The sample text is:\n" << sampleText << endl;
   }

   // close input file
   inputStream.close();

   return 0;
}
