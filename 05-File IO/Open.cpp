#include "Open.h"
#include <iostream>
#include <fstream>
#include <random>
#include <ctime>

using std::fstream;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void RunningOutOfToner(string fileName)
{	
	int rando = 0;
	char replace[80];
	fstream file;

	file.open(fileName, std::ios::out | std::ios::in);

	if (file.is_open())
	{
		srand(time(NULL));
		while (getline(file, fileName))
		{
			(string)replace = fileName;
			for (int i = 0; i < strlen(replace); ++i)
			{
				rando = rand() % 10 + 1;
				replace[rando] = (char)254;
				file << (string)replace << endl;
			}
		}
	}
	else
		std::cerr << "ERROR: SOMETHING WENT WRONG" << endl;
}