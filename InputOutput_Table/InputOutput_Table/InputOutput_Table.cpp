#include <iostream>
using namespace std;

// Declarations
void Toggle(bool& _var, int& _counter, int _terminal);

// Begin MAIN
int main()
{
	bool a = true;
	bool b = true;
	bool c = true;
	bool d = true;
	bool e = true;

	int a_counter = 1;
	int b_counter = 1;
	int c_counter = 1;
	int d_counter = 1;
	int e_counter = 1;

	for (int i = 1; i <= 32; i++)
	{
		/*
		// Variable 'a' toggle
		if (a_counter == 17 && a == true) {
			a_counter = 1;
			a = false;
		}
		else if (a_counter == 17 && a == false) {
			a_counter = 1;
			a = true;
		}

		// Variable 'b' toggle
		if (b_counter == 9 && b == true) {
			b_counter = 1;
			b = false;
		}
		else if (b_counter == 9 && b == false) {
			b_counter = 1;
			b = true;
		}

		// Variable 'c' toggle
		if (c_counter == 2) {
			if (c == true) {
				c = false;
			}
			else if (c == false) {
				c = true;
			}
			// Reset variable's counter
			c_counter = 1;
		}

		// Variable 'd' toggle
		if (d_counter == 3) {
			if (d == true) {
				d = false;
			}
			else if (d == false) {
				d = true;
			}
			// Reset variable's counter
			d_counter = 1;
		}

		// Variable 'e' toggle
		if (e_counter == 2) {
			if (e == true) {
				e = false;
			}
			else if (e == false) {
				e = true;
			}
			// Reset variable's counter
			e_counter = 1;
		}
		*/

		Toggle(a, a_counter, 17);
		Toggle(b, b_counter, 9);
		Toggle(c, c_counter, 5);
		Toggle(d, d_counter, 3);
		Toggle(e, e_counter, 2);

		a_counter++;
		b_counter++;
		c_counter++;
		d_counter++;
		e_counter++;

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