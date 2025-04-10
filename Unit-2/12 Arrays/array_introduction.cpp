/*==================================================================================================
Array Introduction
Author:
==================================================================================================*/
#include	<iostream>
#include <time.h>

using namespace std;

const int TESTSIZE = 15;
const int RANDMAX = 100;

/*--------------------------------------------------------------------------------------------------
Function Declarations:
--------------------------------------------------------------------------------------------------*/

void showMenu();
/*
   Behavior: Displays the menu for the different test options
*/

void printArray(int arr[], int length);
/*
   Behavior: Prints the contents of the array as a comma seperated list.
   Example: 12, 9, 11, 7, 1
*/

void initializeArray(int arr[], int length);
/*
	Behavior: Fills the array with values from 0  to length-1
	Example: An array of length 4 would contain 0, 1, 2, 4
*/

void randomArray(int arr[], int length, int max);
/*
   Behavior: Fills the array with random integers between 1 and max.
             Note: this destroys any existing data
*/

bool isElement(int arr[], int length, int value);
/*
	Behavior: returns true if value is an element of the array
	          false otherwise
*/

int countElement(int arr[], int length, int value);
/*
	Behavior: counts and returns the number of occurances of value in arr
*/

bool checkForDuplicates(int arr[], int length);
/*
	Behavior: Returns true if there are any duplicate values in the array, false otherwise
*/

int arrayMaximum(int arr[], int length);
/*
   Behavior: returns the maximum value in the array
*/

int arrayMinimum(int arr[], int length);
/*
   Behavior: returns the minimum value in the array
*/

float arrayAverage(int arr[], int length);
/*
   Behavior: Returns the average value in the array
*/

void reverseArray(int arr[], int length);
/*
	Behavior: Reverses the order of the array. For instance 1, 2, 3, 4 becomes 4, 3, 2, 1
*/

/*--------------------------------------------------------------------------------------------------
Main:
--------------------------------------------------------------------------------------------------*/

int main(){
	int userOption; // the option from the menu
	int searchInteger; // a user supplied integer value, used for searching

	int testArray[TESTSIZE];

	// initialize random seed
	srand(time(NULL));

	// fill the array with zeros
	for(int i = 0; i < TESTSIZE; i++)
		testArray[i] = 0;

	do{
      cout << "Please select an option, 0 to see the menu> ";
		cin >> userOption;

		switch(userOption){
			case 0:
				showMenu();
				break;
			case 1:
				printArray(testArray, TESTSIZE);
				break;
			case 2:
				initializeArray(testArray, TESTSIZE);
				break;
			case 3:
				randomArray(testArray, TESTSIZE, RANDMAX);
				break;
			case 4:
				cout << "What number do you want to look for?> ";
				cin >> searchInteger;
				if(isElement(testArray, TESTSIZE, searchInteger)){
					cout << searchInteger << " is in the array.\n";
				}else{
					cout << searchInteger << " is not in the array.\n";
				}
				break;
			case 5:
				cout << "What number do you want to look for?> ";
				cin >> searchInteger;
				cout<< "Count = " << countElement(testArray, TESTSIZE, searchInteger) << endl;
				break;
			case 6:
				if(checkForDuplicates(testArray, TESTSIZE)){
					cout << "Duplicates found.\n";
				}else{
					cout << "No duplicates found\n";
				}
				break;
			case 7:
				cout << "Maximum Value: " << arrayMaximum(testArray, TESTSIZE) << endl;
				break;
			case 8:
				cout << "Minimum Value: " << arrayMinimum(testArray, TESTSIZE) << endl;
				break;
			case 9:
				cout << "Average Value: " << arrayAverage(testArray, TESTSIZE) << endl;
				break;
			case 10:
				reverseArray(testArray, TESTSIZE);
				break;
			case 11:
				cout << "Exiting..." << endl;
				break;
			default:
				cout << "Not a valid option\n";
		}
	}while(userOption != 11);

	return 0;
}

/*--------------------------------------------------------------------------------------------------
Function Implementations:
--------------------------------------------------------------------------------------------------*/

void showMenu(){
	cout << "Test Cases:\n";
	cout << "\t 0. showMenu\n";
	cout << "\t 1. printArray\n";
	cout << "\t 2. initializeArray\n";
	cout << "\t 3. randomArray\n";
	cout << "\t 4. isElement\n";
	cout << "\t 5. countElement\n";
	cout << "\t 6. checkForDuplicates\n";
	cout << "\t 7. arrayMaximum\n";
	cout << "\t 8. arrayMinimum\n";
	cout << "\t 9. arrayAverage\n";
	cout << "\t10. reverseArray\n";
	cout << "\t11. exit\n";
}

/*------------------------------------------------------------------------------------------------*/

void printArray(int arr[], int length){
	// make sure that the array has at least length > 0
	if(length == 0) return;

	cout << arr[0];
	for(int i = 1; i < length; i++){
		cout << ", " << arr[i];
	}

	cout << endl;

	return;
}

/*------------------------------------------------------------------------------------------------*/

void initializeArray(int arr[], int length){
    for(int i = 0; i <= length - 1; i++){
        arr[i] = i;
    }
	return;
}
/*
	Behavior: Fills the array with values from 0  to length-1
	Example: An array of length 4 would contain 0, 1, 2, 3
*/

/*------------------------------------------------------------------------------------------------*/

void randomArray(int arr[], int length, int max){
    for(int i = 0; i < length; i++){
        arr[i] = rand() % max + 1;
    }
	return;
}

bool isElement(int arr[], int length, int value){
    for(int i = 0; i < length; i++){
        if(arr[i] == value)
            return true;
    }
	return false;
	/*
	Behavior: returns true if value is an element of the array
	          false otherwise
    */
}

/*------------------------------------------------------------------------------------------------*/

int countElement(int arr[], int length, int value){
    int cElements = 0;
    for(int i = 0; i < length; i++){
        if(arr[i] == value)
            cElements++;
    }
	return cElements;
    /*
	Behavior: counts and returns the number of occurance of value in arr
    */
}

/*------------------------------------------------------------------------------------------------*/

void reverseArray(int arr[], int length){
    for(int i = 0; i < length / 2; i++){
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

/*------------------------------------------------------------------------------------------------*/

bool checkForDuplicates(int arr[], int length){
    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(arr[i] == arr[j])
                return true;
        }
    }
	return false;
	/*
	Behavior: Returns true if there are any duplicate values in the array, false otherwise
    */
}

/*------------------------------------------------------------------------------------------------*/

int arrayMaximum(int arr[], int length){
    int largest = arr[1];
    for(int i = 0; i < length; i++){
        if(arr[i] > largest)
            largest = arr[i];
    }
	return largest;
	/*
   Behavior: returns the maximum value in the array
    */
}

/*------------------------------------------------------------------------------------------------*/

int arrayMinimum(int arr[], int length){
    int smallest = arr[1];
    for(int i = 0; i < length; i++){
        if(arr[i] < smallest)
            smallest = arr[i];
    }
	return smallest;
}

/*------------------------------------------------------------------------------------------------*/

float arrayAverage(int arr[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += arr[i];
    }
	return 1.0 * sum / length;

}

/*------------------------------------------------------------------------------------------------*/
