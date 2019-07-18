// Andrew Maynez
// Program 7: Sequence
#include <iostream>

void Sequence(int _length);

int main()
{
	for (int i = 4; i > 0; i--)
	{
		Sequence(i);
	}
}

void Sequence(int _length) {
	for (int i = 0; i < _length; i++)
	{
		std::cout << "1";
	}

	std::cout << " ";

	for (int i = 0; i < _length; i++)
	{
		std::cout << "0";
	}

	std::cout << " ";
}

/*
Write a program to generate and display the following binary sequence:

1111 0000 1110 0011 0010

Program Requirements:

	Hint: look for patterns in the sequence of binary values
	The sequence does not have to display with comma separators.


Additional Requirements:

	DO NOT HARD CODE the output value
	Don't use switch or if statements
	don't manipulate loops to make them match if statements either
	don't use more than 5 for/do while/while loops in any combination
	Test cases not required
*/
