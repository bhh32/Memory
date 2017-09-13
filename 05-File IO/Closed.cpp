#include "Closed.h"
#include <iostream>
#include <fstream>

using std::fstream;
using std::cerr;
using std::cout;
using std::endl;
using std::string;

//1.) Digital Printer
void DigitalPrinter(string filePath)
{
	fstream file;

	file.open(filePath);

	if (file.fail())
	{
		cerr << "ERROR: FILE NOT FOUND" << endl;
	}

	string buffer;
	while (std::getline(file, buffer))
	{
		cout << buffer << endl;
	}
}

//2.) Console Mockup
void ConsoleMockup(string fileName, string name, string age, string color)
{
	fstream file;

	file.open(fileName, std::ios::out);

	if (file.is_open())
	{
		file << "Name: " << name << endl;
		file << "Age: " << age << endl;
		file << "Favorite Color: " << color << endl;
	}
	file.flush();
	file.close();
}