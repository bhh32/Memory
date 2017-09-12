#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Functions
/** CLOSED ACTIVITIES **/
// DO WITHOUT USING SUBSCRIPT OPERATOR

//1.) Print an Array of Floats
void PrintFloats(float* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << *(arr + i) << endl;
	}
}

//2.) Sum Of Integer Array
int ArraySum(int* arr, int size)
{
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total += *(arr + i);
	}

	return total;
}


//3.) Average of Integer Array
float ArrayAvg(int* arr, int size)
{
	float avg = (float)ArraySum(arr, size) / size;

	return avg;
}

/** OPEN ACTIVITIES **/
// DO WITHOUT USING SUBSCRIPT OPERATOR

//1.) FindCount
int FindCount(int target, int* arr, int size)
{
	int targetCount = 0;

	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) == target)
			targetCount++;
	}

	return targetCount;
}

//2.) Array Copy

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i != size - 1)
			cout << *(arr + i) << ", ";
		else
			cout << *(arr + i) << endl;
	}
}

void PrintArray(char* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i != size - 1)
			cout << *(arr + i);
		else
			cout << *(arr + i) << endl;
	}
}

void ArrCopy(int* srcArr, int srcSize, int* dstArr, int dstSize)
{
	if (srcSize <= dstSize)
	{
		for (int i = 0; i < dstSize; ++i)
		{
			if (*(dstArr + i) < srcSize)
			{
				for (int j = 0; j < srcSize; ++j)
				{
					if (i == j)
						*(dstArr + j) = *(srcArr + i);
				}
			}
			else
				*(dstArr + i) = 0;

		}

		cout << "Source Array: ";
		PrintArray(srcArr, srcSize);
		cout << endl;
		cout << "Copied Array: ";
		PrintArray(dstArr, dstSize);
	}
	else
		cout << "Error: You can't copy a larger array to a smaller array. Check your parameters!\n";
}

void ArrCopy(char* srcArr, int srcSize, char* dstArr, int dstSize)
{
	if (srcSize <= dstSize)
	{
		for (int i = 0; i < dstSize; ++i)
		{
			if (i <= srcSize)
			{
				for (int j = 0; j < srcSize; ++j)
				{
					if (i == j)
						*(dstArr + j) = *(srcArr + i);
				}
			}
			else
				*(dstArr + i) = 0;

		}
	}
	else
		cout << "Error: You can't copy a larger array to a smaller array. Check your parameters!\n";
}

//3.) Array Reversal
void ArrReversal(int* arr, int size)
{
	int* temp = new int[size];

	PrintArray(arr, size);

	for (int i = 0; i < size / 2; ++i)
	{
		// record front value
		temp[i] = *(arr + i);

		// Work from the outside to the middle replacing values
		*(arr + i) = *(arr + (size - 1 - i));
		*(arr + (size - 1 - i)) = temp[i];
	}

	PrintArray(arr, size);

	delete[] temp;
}

//4.) String Reversal
void StringReversal(char* arr, int size)
{
	char* temp = new char[size];

	PrintArray(arr, size);

	for (int i = 0; i < size / 2; ++i)
	{
		// record front value
		temp[i] = *(arr + i);

		// Work from the outside to the middle replacing values
		*(arr + i) = *(arr + (size - 1 - i));
		*(arr + (size - 1 - i)) = temp[i];
	}

	PrintArray(arr, size);

	delete[] temp;
}

int main()
{

	/** WALKTHROUGH **/
	//Pointer Arithmetic
	//Pointer Arithmetic 2: Electric Boogaloo (arrays)
	int* hArr = new int[2];

	hArr[0] = 1;
	hArr[1] = 2;

	cout << hArr[0] << endl;
	cout << *(hArr+1) << endl;

	int* arrLarge = new int[100];
	int arrLargeStack[100];

	// iteration w/ subscript operator
	for (int i = 0; i < 100; ++i)
	{
		arrLarge[i] = i;
		arrLargeStack[i] = i;
	}

	// iteration w/ pointer arithmetic
	for (int i = 0; i < 100; ++i)
	{
		cout << "arrLarge: " << *(arrLarge + i) << endl;
		cout << "arrLargeStack: " << *(arrLargeStack + i) << endl;
	}


	delete[] hArr;
	delete[] arrLarge;

	// Type Casting
	float dollars = 1.80f;

	cout << "dollars: " << dollars << endl;
	cout << "dollars type casted to int: " << (int)dollars << endl;
	cout << endl;

	/** CLOSED ACTIVITIES **/
	// DO WITHOUT USING SUBSCRIPT OPERATOR

	//1.) Print an Array of Floats
	int floatArrSize = 10;
	float* floatArr = new float[floatArrSize];

	for (int i = 0; i < floatArrSize; ++i)
	{
		floatArr[i] = i + .2f;
	}

	PrintFloats(floatArr, floatArrSize);

	delete floatArr;

	cout << "\n";


	//2.) Sum Of Integer Array
	int sumArraySize = 4;
	int* sumArray = new int[sumArraySize];

	sumArray[0] = 3;
	sumArray[1] = 2;
	sumArray[2] = 10;
	sumArray[3] = 12;

	cout << "The array sum is: " << ArraySum(sumArray, sumArraySize) << endl;

	delete[] sumArray;

	cout << endl;

	//3.) Average of Integer Array
	int intAvgSize = 5;
	int* intAvg = new int[intAvgSize];

	intAvg[0] = 4;
	intAvg[1] = 7;
	intAvg[2] = 9;
	intAvg[3] = 1;
	intAvg[4] = 2;

	cout << "intAvg: " << ArrayAvg(intAvg, intAvgSize) << endl;

	delete[] intAvg;

	cout << endl;

	/** OPEN ACTIVITIES **/
	// DO WITHOUT USING SUBSCRIPT OPERATOR

	//1.) FindCount
	int arrSizes = 8;
	int target1 = 2;
	int target2 = 8;
	int target3 = 4;
	int* countArray1 = new int[arrSizes];
	int* countArray2 = new int[arrSizes];
	int* countArray3 = new int[arrSizes];

	countArray1[0] = 0;
	countArray1[1] = 1;
	countArray1[2] = 2;
	countArray1[3] = 3;
	countArray1[4] = 4;
	countArray1[5] = 5;
	countArray1[6] = 6;
	countArray1[7] = 7;

	countArray2[0] = 0;
	countArray2[1] = 1;
	countArray2[2] = 2;
	countArray2[3] = 3;
	countArray2[4] = 4;
	countArray2[5] = 5;
	countArray2[6] = 6;
	countArray2[7] = 7;

	countArray3[0] = 0;
	countArray3[1] = 4;
	countArray3[2] = 2;
	countArray3[3] = 1;
	countArray3[4] = 4;
	countArray3[5] = 3;
	countArray3[6] = 2;
	countArray3[7] = 4;

	cout << "Target 1 shows up: " << FindCount(target1, countArray1, arrSizes) << " times!" << endl;
	cout << "Target 2 shows up: " << FindCount(target2, countArray2, arrSizes) << " times!" << endl;
	cout << "Target 3 shows up: " << FindCount(target3, countArray3, arrSizes) << " times!" << endl;

	delete[] countArray1;
	delete[] countArray2;
	delete[] countArray3;

	cout << endl;

	//2.) Array Copy
	int sourceArr1Size = 8;
	int sourceArr2Size = 8;
	int sourceArr3Size = 4;
	int errorSourceArraySize = 1;

	int dstArr1Size = 8;
	int dstArr2Size = 8;
	int dstArr3Size = 4;
	int errorDstArraySize = 10;

	int* sourceArr1 = new int[sourceArr1Size];
	int* sourceArr2 = new int[sourceArr2Size];
	int* sourceArr3 = new int[sourceArr3Size];
	int* errorSourceArr = new int[errorSourceArraySize];

	for (int i = 0; i < sourceArr1Size; ++i)
	{
		*(sourceArr1 + i) = i;
		*(sourceArr2 + i) = i;
	}

	for (int i = 0; i < sourceArr3Size; ++i)
	{
		*(sourceArr3 + i) = i;
	}

	for (int i = 0; i < errorSourceArraySize; ++i)
	{
		*(errorSourceArr + i) = i;
	}

	int* dstArr1 = new int[dstArr1Size];
	int* dstArr2 = new int[dstArr2Size];
	int* dstArr3 = new int[dstArr3Size];
	int* errorDstArr = new int[errorDstArraySize];

	ArrCopy(sourceArr1, sourceArr1Size, dstArr1, dstArr1Size);
	cout << endl;
	cout << endl;
	ArrCopy(sourceArr2, sourceArr2Size, dstArr2, dstArr2Size);
	cout << endl;
	cout << endl;
	ArrCopy(sourceArr3, sourceArr3Size, dstArr3, dstArr3Size);
	cout << endl;
	cout << endl;
	ArrCopy(errorSourceArr, errorSourceArraySize, errorDstArr, errorDstArraySize);
	cout << endl;
	cout << endl;

	delete[] sourceArr1;
	delete[] sourceArr2;
	delete[] sourceArr3;
	delete[] errorSourceArr;

	delete[] dstArr1;
	delete[] dstArr2;
	delete[] dstArr3;
	delete[] errorDstArr;

	//3.) Array Reversal
	int reverseArraySizes = 8;

	int* reverseArray1 = new int[reverseArraySizes];
	int* reverseArray2 = new int[reverseArraySizes];
	int* reverseArray3 = new int[reverseArraySizes];

	for (int i = 0; i < reverseArraySizes; ++i)
	{
		*(reverseArray1 + i) = i;
		*(reverseArray2 + i) = i;
	}

	reverseArray3[0] = 0;
	reverseArray3[1] = 4;
	reverseArray3[2] = 2;
	reverseArray3[3] = 1;
	reverseArray3[4] = 4;
	reverseArray3[5] = 3;
	reverseArray3[6] = 2;
	reverseArray3[7] = 1;

	ArrReversal(reverseArray1, reverseArraySizes);
	cout << endl;
	cout << endl;
	ArrReversal(reverseArray2, reverseArraySizes);
	cout << endl;
	cout << endl;
	ArrReversal(reverseArray3, reverseArraySizes);
	cout << endl;
	cout << endl;

	delete[] reverseArray1;
	delete[] reverseArray2;
	delete[] reverseArray3;

	// String Reversal
	char* string = new char[6];
	string[0] = 'B';
	string[1] = 'r';
	string[2] = 'y';
	string[3] = 'a';
	string[4] = 'n';
	string[5] = '\0';
	
	StringReversal(string, strlen(string));

	system("pause");

	return 0;
}