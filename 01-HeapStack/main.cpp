#include <iostream>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;

// Walkthrough
int sum(int* numA, int* numB)
{
	return *numA + *numB;
}

// Closed Activities
int SubtractPointers(int* numA, int* numB)
{
	return *numA - *numB;
}

// Open Activities
// Populates a heap allocated array
void PopulateIntArray(int* intArr, int capacity)
{
	for (int i = 0; i < capacity; i++)
	{
		if (i == 0)
			intArr[i] = 3;
		else
			intArr[i] = (i + 1) * 3;
	}
}

// Prints the PopulateIntArray array
void PrintIntArray(int* intArr, int capacity)
{
	for (int i = 0; i < capacity; i++)
	{
		cout << "arr: " << intArr[i] << endl;
	}
}

// Takes user input and checks if they chose more evens or odds
void UserInputArray()
{
	int capacity = 0;
	int even = 0;
	int odd = 0;
	cout << "How many numbers would you like to provide: ";
	cin >> capacity;

	int* arr = new int[capacity];

	for (int i = 0; i < capacity; i++)
	{
		cout << "Okay, what's number " << i + 1 << "?\n";
		cin >> arr[i];
	}

	for (int i = 0; i < capacity; i++)
	{
		if (arr[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	if (even > odd)
		cout << "Wow, you sure do like even numbers!\n";
	else
		cout << "Wow, you sure do like odd numbers!\n";

	delete arr;
}

// Takes user input and sees if their numbers add to 21
void AddToTwentyOne()
{
	int capacity = 0;
	int total = 0;
	cout << "Let's try gathering up some numbers that you can use to add up to 21.\n";
	cout << "How many numbers do you think you'll need: ";
	cin >> capacity;

	int* arr = new int[capacity];

	for (int i = 0; i < capacity; i++)
	{
		cout << "Okay, what's number " << i + 1 << "?\n";
		cin >> arr[i];
	}

	for (int i = 0; i < capacity; i++)
	{
		total += arr[i];
	}

	if (total == 21)
		cout << "Wow, that adds up to 21! You sure can count!\n";
	else
		cout << "Sorry, those numbers don't add up to 21. The total is: " << total << endl;

	delete arr;
}

// CHALLENGE ACTIVITIES

//1.) Heap-Allocated Array Of Game Names
void GameNamesArray()
{
	int capacity = 0;
	

	cout << "How many game names would you like to provide: ";
	cin >> capacity;

	char arr[][80] = { 0 };
	for (int i = 0; i < capacity; i++)
	{
		for (int j = 0; j < capacity; j++)
		{
			cout << "Okay, what's name " << i + 1 << "?\n";
			//cin.gets(arr[i][j], 80);
		}
	}

	for (int i = 0; i < capacity; i++)
	{
		for (int j = 0; i < capacity; j++)
		{
			cout << "Your game: " << arr[i][j] << endl;
		}
	}

	delete arr;
}

int main()
{
	// Working with Pointers
	// Working with Heap-Allocation Memory
	int age = 13;

	cout << age << endl;

	int* agePtr = new int(22); // Creates pointer

	cout << agePtr << endl; // Prints out memory address
	cout << *agePtr << endl; // Dereferences pointer to print value in variable

	int* ageAlias = &age; // Assigns the memory address of age to the pointer
	cout << *ageAlias << endl; // Prints out the age value at the memory address

	*ageAlias = 48; // Assigns the value to the memory address of age
	cout << "age: " << age << endl; // Prints the new age value
	cout << "ageAlias: " << *ageAlias << endl; // Prints the value in the memory address assigned to the pointer

	// Pointers as Parameters
	int x = sum(agePtr, ageAlias);
	cout << x << endl;
	
	delete agePtr; // Deletes the pointer off of the heap
	// delete ageAlias; NOT LEGAL BECAUSE IT POINTS TO AN AUTOMATIC ALLOCATED MEMORY ADDRESS DUE TO ALLOCATING TO AGE ADDRESS


	//Closed Activites
	// Allocate/Deallocate pointers
	int* intNum = new int(3);
	float* floatNum = new float(2.1f);
	bool* trueFalse = new bool(true);
	int* intArr = new int[5];
	float* floatArr = new float[5];
	bool* boolArr = new bool[2];

	for (int i = 0; i < 5; i++)
	{
		intArr[i] = i;
//		floatArr[i] = i++;
	}

	boolArr[0] = true;
	boolArr[1] = false;

	// print values to prove allocation
	cout << "intNum: " << *intNum << endl;
	cout << "floatNum: " << *floatNum << endl;
	cout << "trueFalse: " << *trueFalse << endl;

	for (int i = 0; i < 5; ++i)
	{
		cout << "intArr: " << intArr[i] << endl;
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << "floatArr: " << floatArr[i] << endl;
	}

	for (int i = 0; i < 2; ++i)
	{
		cout << "boolArr: " << boolArr[i] << endl;
	}

	// Deallocate pointers
	delete intNum;
	delete floatNum;
	delete trueFalse;
	delete[] intArr;
	delete[] floatArr;
	delete[] boolArr;

	// 2.) Subtracting Heap-Allocated Numbers
	int* num1A = new int(5);
	int* num1B = new int(1);
	cout << SubtractPointers(num1A, num1B) << endl;
	delete num1A;
	delete num1B;

	int* num2A = new int(3);
	int* num2B = new int(2);
	cout << SubtractPointers(num2A, num2B) << endl;
	delete num2A;
	delete num2B;

	int* num3A = new int(7);
	int* num3B = new int(3);
	cout << SubtractPointers(num3A, num3B) << endl;
	delete num3A;
	delete num3B;

	int* num4A = new int(4);
	int* num4B = new int(4);
	cout << SubtractPointers(num4A, num4B) << endl;
	delete num4A;
	delete num4B;

	//3.) Heap-Allocated Int Array
	int *intArray = new int[10];

	for (int i = 0; i < 10; i++)
	{
		intArray[i] = i++;
		cout << intArray[i] << endl;
	}

	// Open Activities
	
	//1.) Populating an Array from 1 to X (Function)
	int capacity = 4;
	int* arr = new int[capacity];
	PopulateIntArray(arr, capacity);
	cout << "\n";

	//2.) Printing Heap-Allocated Integer Array
	PrintIntArray(arr, capacity);
	cout << "\n";
	
	//3.) Heap-Allocated Array Of Numbers	
	//UserInputArray();
	//cout << "\n";

	//4.) Adding Up To 21
	//AddToTwentyOne();
	cout << "\n";

	// Challenge Activities
	//1.) Game Names Array
	GameNamesArray();
	cout << "\n";




	system("pause");

	return 0;
}