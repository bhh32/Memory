#pragma once

//1.) CallMeMaybe
void CallMeMaybe();

//2.) Picker
int &Picker(int &optA, int &optB, int &optC);

//3.) Unit Tests

// Prints an array of Xs with the provided dimensions
// - This should fail if a negative value is provided for the width or height.
void GridGen(int width, int height);

// Converts all letters in an cstring to uppercase.
// - This should fail if any non-alphanumeric characters are detected.
void ToUpper(char* cstr);

// Converts all letters in an cstring to lowercase.
// - This should fail if any non-alphanumeric characters are detected.
void ToLower(char* cstr);

// Prints the contents of a text file to the terminal.
// - This should fail if the file you're attempting to load does not exist.
void PrintFile(char* filePath);