#include <iostream>
using namespace std;

// Function declarations
void Toggle(bool& _var, int& _counter, int _terminal);
bool Function(bool _a, bool _b, bool _c, bool _d, bool _e);
bool Negation(bool _x);

int main()
{
	// Variables
	bool a = true, b = true, c = true, d = true, e = true;
	int a_counter = 1, b_counter = 1, c_counter = 1, d_counter = 1, e_counter = 1;

	// Display column headers
	cout << "a b c d e | (( c + ~d ) * b ) * ~( d + a * e )\n-----------------------------------------------" << endl;

	// Repeat 32 times
	for (int i = 1; i <= 32; i++)
	{
		// Call Toggle()
		Toggle(a, a_counter, 17);
		Toggle(b, b_counter, 9);
		Toggle(c, c_counter, 5);
		Toggle(d, d_counter, 3);
		Toggle(e, e_counter, 2);

		// Increment all counter variables
		a_counter++, b_counter++, c_counter++, d_counter++, e_counter++;

		// Display results
		cout << a << " " << b << " " << c << " " << d << " " << e << "\t" << Function(a, b, c, d, e) << endl;
	}// END FOR-LOOP

	cout << system("pause");
	return 0;
}// End MAIN

/// <summary>
/// Toggle
/// Inputs certain parameters by reference.
/// Determines if variable has reached its toggle point
/// and switches truth value if required.
/// Returns void.
/// </summary>
/// <param name="_var">ref bool _var</param>
/// <param name="_counter">ref int _counter</param>
/// <param name="_toggle">int _toggle</param>
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
}

/// <summary>
/// Function
/// Input parameters to computer predetermined boolean function
/// </summary>
/// <param name="_a">bool _a</param>
/// <param name="_b">bool _b</param>
/// <param name="_c">bool _c</param>
/// <param name="_d">bool _d</param>
/// <param name="_e">bool _e</param>
/// <returns>bool value</returns>
bool Function(bool _a, bool _b, bool _c, bool _d, bool _e) {
	// (( c + ~d ) * b ) * ~( d + a * e )
	return ((_c + Negation(_d)) * _b) * Negation((_d + _a * _e));
}

/// <summary>
/// Negation
/// Inputs boolean parameter and returns opposite value.
/// </summary>
/// <param name="_x">bool _x</param>
/// <returns>bool x</returns>
bool Negation(bool _x) {
	bool x = false;
	if (_x == true) {
		x = false;
	}
	else if (_x == false) {
		x = true;
	}
	return x;
}