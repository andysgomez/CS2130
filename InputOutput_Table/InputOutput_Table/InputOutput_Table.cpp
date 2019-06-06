#include <iostream>
using namespace std;

// Declarations
void Toggle(bool& _var, int& _counter, int _terminal);

// Begin MAIN
int main()
{
	// Declare variables
	bool a = true, b = true, c = true, d = true, e = true;
	int a_counter = 1, b_counter = 1, c_counter = 1, d_counter = 1, e_counter = 1;

	// Repeat 32 times
	for (int i = 1; i <= 32; i++)
	{
		Toggle(a, a_counter, 17);
		Toggle(b, b_counter, 9);
		Toggle(c, c_counter, 5);
		Toggle(d, d_counter, 3);
		Toggle(e, e_counter, 2);

		// Increment all counter variables
		a_counter++, b_counter, c_counter++, d_counter++, e_counter++;

		cout << i << " " << a << " " << b << " " << c << " " << d << " " << e << endl;
	}// END FOR-LOOP
	return 0;
}// End MAIN

void Toggle(bool& _var, int& _counter, int _toggle) {
	// Check if variable's counter has been reached against
	// predetermined toggle setpoint.
	if (_counter == _toggle) {
		// Change by reference the variable's boolean value.
		if (_var == true) {
			_var = false;
		}
		else if (_var == false) {
			_var = true;
		}
		// Reset variable's counter.
		_counter = 1;
	}
}// END TOGGLE METHOD

// AND METHOD
// OR METHOD
// NEGATION METHOD