#include "Open.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <string>

using std::cout;
using std::endl;

//1.) CallMeMaybe
void CallMeMaybe()
{
	static int counter = 0;
	counter++;
	counter = counter % 5;

	switch (counter)
	{
	case 0:
		cout << "Number 1... uh... Number 0 Baby!" << endl;
		break;
	case 1:
		cout << "Hey You Chose Me!" << endl;
		break;
	case 2:
		cout << "Boom! Ha! Scared Ya!" << endl;
		break;
	case 3:
		cout << "Another Random Comment!" << endl;
		break;
	case 4:
		cout << "DUN DUN DUN!" << endl;
		break;
	default:
		cout << "ERROR: SOMETHING WENT WRONG WITH RANDO!" << endl;
		break;
	}
}

//2.) Picker
int &Picker(int &optA, int &optB, int &optC)
{
	static int counter = 1;
	switch (counter)
	{
	case 1:
		counter++;
		return optA;
		break;
	case 2:
		counter++;
		return optB;
		break;
	case 3:
		counter = 1;
		return optC;
		break;
	default:
		break;
	}
}

//3.) Unit Tests
void GridGen(int width, int height)
{
	// Error Handling
	assert(width > -1 && height > -1);

	// Allocate the grid array
	char** grid = new char*[height];
	for (int i = 0; i < height; ++i)
	{
		grid[i] = new char[width];
	}

	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
		{
			grid[i][j] = 'x';
		}
	}

	for (int i = 0; i < height; ++i)
		for(int j = 0; j < width; ++j)
			cout << grid[i][j] << endl;
}

void ToUpper(char* cstr)
{
	for (int i = 0; i < strlen(cstr); ++i)
	{
		if (i == strlen(cstr - 1))
			cout << cstr[i] << endl;
		else if (i == 0)
			cout << "Before the conversion: " << cstr[i];
		else
			cout << cstr[i];

		if (cstr[i] >= (char)97 && cstr[i] <= (char)122)
		{
			cstr[i] -= (char)32;
		}
		else if (cstr[i] >= (char)65 && cstr[i] <= (char)90)
		{
			cstr[i] = cstr[i];
		}
		else
		{
			cout << "ERROR - This is not and alpha character: " << cstr[i] << endl;
			break;
		}
	}

	cout << endl;

	for (int printChar = 0; printChar < strlen(cstr); ++printChar)
	{
		if (printChar == strlen(cstr - 1))
			cout << cstr[printChar] << endl;
		else if (printChar == 0)
			cout << "Converted To Uppercase: " << cstr[printChar];
		else
			cout << cstr[printChar];
	}
}

void ToLower(char* cstr)
{
	for (int i = 0; i < strlen(cstr); ++i)
	{
		if (i == strlen(cstr - 1))
			cout << cstr[i] << endl;
		else if (i == 0)
			cout << "Before the conversion: " << cstr[i];
		else
			cout << cstr[i];

		if (cstr[i] >= (char)65 && cstr[i] <= (char)90)
		{
			cstr[i] += (char)32;
		}
		else if (cstr[i] >= (char)97 && cstr[i] <= (char)122)
		{
			cstr[i] = cstr[i];
		}
		else
		{
			cout << "ERROR - This is not and alpha character: " << cstr[i] << endl;
			break;
		}
	}

	cout << endl;

	for (int printChar = 0; printChar < strlen(cstr); ++printChar)
	{
		if (printChar == strlen(cstr - 1))
			cout << cstr[printChar] << endl;
		else if (printChar == 0)
			cout << "Converted To Lowercase: " << cstr[printChar];
		else
			cout << cstr[printChar];
	}
}

void PrintFile(char* filePath)
{
	std::string fileOutput;

	std::ifstream consolePrintFile(filePath);
	

	if (consolePrintFile.is_open())
		while (std::getline(consolePrintFile, fileOutput))
		{
			cout << fileOutput << endl;
		}
	consolePrintFile.close();
}