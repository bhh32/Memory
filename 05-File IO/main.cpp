#include <iostream>
#include <fstream>
#include <string>
#include "Closed.h"
#include "Open.h"

using std::string;
using std::fstream;

using namespace std;

int main()
{
	/** WALKTHROUGH ACTIVITY **/

	fstream file;

	file.open("text.txt");

	if (file.fail())
	{
		cout << "File not found." << endl;
		return -1;
	}

	//Reading from a File
	string buffer;

	if (file.is_open())
	{
		while (getline(file, buffer))
		{
			// Print the line!
			cout << buffer << endl;
		}

		file.clear(); // reset the error flags

		file.seekp(0, ios_base::end); // move my cursor to the end
	}

	//Writing to a File
	file << "Today is alway the present! :)" << endl;

	file.flush();
	file.close();

	// Let's create a file
	fstream autoCreate;

	autoCreate.open("CreateMe.txt", ios::out);

	if (autoCreate.is_open())
	{
		file << "This was an auto created file!" << endl;
	}
	else
		cerr << "ERROR: SOMETHING WENT WRONG!" << endl;

	file.flush();
	file.close();

	cout << endl;
	cout << endl;
	cout << endl;

	/** CLOSED ACTIVITIES **/
	//1.) DigitalPrinter
	string userInput;
	while (true)
	{
		cout << "What File Would You Like To Read? Type quit To Quit: ";
		getline(cin, userInput);
		cout << endl;
		if (userInput == "quit" || userInput == "Quit")
			break;
		
		DigitalPrinter(userInput);
		cout << endl;
	}

	//2.) My Information
	string fileName;
	string name;
	string age;
	string color;

	/*cout << "What should your file name be? End the file name with .txt: ";
	getline(cin, fileName);
	
	cout << endl;

	cout << "What's your name? ";
	getline(cin, name);

	cout << endl;

	cout << "What's your age? ";
	getline(cin, age);

	cout << endl;

	cout << "What's your favorite color? ";
	getline(cin, color);

	cout << endl;

	ConsoleMockup(fileName, name, age, color);

	cout << "Thanks! Check your file for your results." << endl;

	cout << endl;
	cout << endl;
	cout << endl;*/

	/** OPEN ACTIVITIES **/
	//1.) Running Out Of Toner
	RunningOutOfToner("ImportMessage.txt");

	system("pause");
	return 0;
}