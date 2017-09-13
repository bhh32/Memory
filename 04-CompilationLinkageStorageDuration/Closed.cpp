#include <iostream>
#include "Closed.h"

using std::cout;
using std::endl;

//1.) Counting to Three
void ReleaseHalfLove()
{
	static int counter = 0;
	counter++;
	if (counter < 3)
		cout << "The game, Half-Love " << counter << ", was released!" << endl;
	else
	{
		counter = 1;
		cout << "The game, Half-Love " << counter << ", was released!" << endl;
	}
}

//2.) Iterative Fizz Buzz
void StepFizzBuzz()
{
	static int counter = 0;
	counter++;

	if (counter % 3 == 0)
	{
		cout << "Fizz" << endl;
	}
	else
		cout << counter << endl;
}

//4.) Checking for Division by Zero
float Divide(float lhs, float rhs)
{
	if (rhs == 0)
	{
		cout << "FATAL ERROR, DIV BY ZERO!" << endl;
		return -1.f;
	}
	else
	{
		cout << "OK" << endl;
		return lhs / rhs;
	}
}