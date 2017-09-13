#include <iostream>
#include <cassert>
#include "Closed.h"
#include "Open.h"
#include "Globals.h"
#include "Incdec.h"

using std::cout;
using std::cin;
using std::endl;

/** WALKTHROUGH FUNCTION PROTOTYPES **/
void diffArrays(int* arrA, size_t arrASize,
				int* arrB, size_t arrBSize);

void Counter();

int main()
{
	/** WALKTHROUGH ACTIVITY **/
	cout << "WALKTHROUGH ACTIVITIES" << endl;
	// Preprocessor Directives
	int numA[] = { 3, 2, 1 };
	int numB[] = { 3, 2, 1 };

	diffArrays(numA, 3, numB, 3);

	for (int i = 0; i < 3; ++i)
		cout << numA[i] << endl;

	cout << endl;

	for(int i = 0; i < 10; ++i)
		Counter();

	cout << endl;
	cout << endl;
	cout << endl;
	/** CLOSED ACTIVITIES **/
	cout << "CLOSED ACTIVITIES" << endl;
	cout << endl;

	//1.) Counting to Three
	for (int i = 0; i < 11; ++i)
		ReleaseHalfLove();

	cout << endl;

	//2.) Iterative Fizz Buzz
	for (int j = 0; j < 11; ++j)
		StepFizzBuzz();

	cout << endl;

	//3.) Shared Counter
	cout << "Counter: " << counter << endl;
	Increment();
	cout << "Counter: " << counter << endl;
	Decrement();
	cout << "Counter: " << counter << endl;
	Increment();
	cout << "Counter: " << counter << endl;

	cout << endl;
	//4.) Checking for Division by Zero
	Divide(2, 3);
	Divide(2, 2);
	Divide(2, 1);
	Divide(2, 0);

	cout << endl;
	cout << endl;
	cout << endl;

	/** OPEN ACTIVITIES **/
	cout << "OPEN ACTIVITIES" << endl;
	cout << endl;

	//1.) CallMeMaybe
	for (int i = 0; i < 5; ++i)
		CallMeMaybe();

	//2.) Picker
	int optA = 2;
	int optB = 4;
	int optC = 6;

	for(int i = 0; i < 10; ++i)
		cout << "Option: " << Picker(optA, optB, optC) << endl;

	cout << endl;

	//3.) Unit Tests
	GridGen(5, 5);

	cout << endl;

	char string[] = { "bryan" };
	
	ToUpper(string);
	cout << endl;
	cout << endl;
	ToLower(string);
	cout << endl;
	cout << endl;

	cout << "The following is an attempt to open an existent file... \n";
	PrintFile("ConsolePrint.txt");
	cout << endl;
	cout << "The folowing is an attempt to open a nonexistent file... \n";
	PrintFile("NonexistentFile.txt");
	
	cout << endl;
	cout << "CHALLENGE ACTIVITIES" << LINEBREAK;
	cout << LINEBREAK;
	cout << "The following line skips are done using an experimental MACRO... ";
	cout << "S" << BREAK << "e" << BREAK << "e" << BREAK << "m" << BREAK << "s" << BREAK << BREAK << "t" << BREAK << 
		"o" << BREAK << BREAK << "h" << BREAK << "a" << BREAK << "v" << BREAK << "e" << BREAK << BREAK << "w" << BREAK << "o" << BREAK 
		<< "r" << BREAK << "k" << BREAK << "e" << BREAK << "d" << BREAK << "?" << endl;
	cout << LINEBREAK;
	cout << "The above and the next line skip was and will be done by a MACRO..." << LINEBREAK;
	cout << LINEBREAK;
	cout << "Well that's the end of making MACROS for this exercise!" << LINEBREAK;

	cout << endl;
	system("pause");

	return 0;
}


/** WALKTHROUGH FUNCTION DEFINITIONS **/
void diffArrays(int* arrA, size_t arrASize,
	int* arrB, size_t arrBSize)
{
	assert(arrBSize <= arrASize);
#ifdef _DEBUG
	if (arrBSize > arrASize)
	{
		std::cerr << __FILE__ << "\n" << __LINE__ << "\n" << "ArrB's size exceeds that of ArrA's size" << endl;
		std::cerr << "COMPILED ON: " << __DATE__ << " " << __TIME__ << endl;
		abort();
	}
#endif
	for (int i = 0; i < arrBSize; ++i)
		arrA[i] -= arrB[i];
}

void Counter()
{
	static int counter = 0;
	counter++;

	cout << counter << endl;
}




