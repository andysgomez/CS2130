//Andrew Maynez

#include <iostream>

std::string MatrixProperties(int _matrix[][4]);
bool Reflexive(int _matrix[][4]);
bool AntiReflexive(int _matrix[][4]);
bool Symmetric(int _matrix[][4]);
bool AntiSymmetric(int _matrix[][4]);
bool Asymmetric(int _matrix[][4]);

int main()
{
	int A[4][4] =
	{
		{1,1,0,0},
		{0,1,0,0},
		{0,0,1,1},
		{0,0,0,1}
	};

	// Display A matrix
	std::cout << "A=";
	for (auto& row : A)
	{
		int rowBreak = 0;
		for (auto& elem : row)
		{
			std::cout << elem << " ";
			if (rowBreak == 3) std::cout << std::endl;
			rowBreak++;
		}
		std::cout << "  ";
	}
	std::cout << "A - " << MatrixProperties(A) << std::endl;

	std::cout << std::endl;
	system("pause");
	return 0;
}

// Properties
std::string MatrixProperties(int _matrix[][4]) {
	std::string str;

	Reflexive(_matrix) ? str += "Reflexive " : str += "";
	AntiReflexive(_matrix) ? str += "Anti-Reflexive " : str += "";

	if (Symmetric(_matrix) && AntiSymmetric(_matrix)) {
		str += "Anti-Symmetric ";
	}
	else {
		Symmetric(_matrix) ? str += "Symmetric " : str += "";
		AntiSymmetric(_matrix) ? str += "Anti-Symmetric " : str += "";
	}

	Asymmetric(_matrix) ? str += "Asymmetric " : str += "";

	if (str == "")
	{
		str = "none";
	}

	return str;
}

// Reflexive
bool Reflexive(int _matrix[][4]) {
	bool value = false;
	int i = 0, j = 0;
	for (size_t f = 0; f < sizeof(_matrix); f++)
	{
		if (_matrix[i][j] == 0) {
			value = false;
			break;
		}
		else if (_matrix[i][j] == 1) {
			value = true;
		}
		i++, j++;
	}
	return value;
}

// Anti-Reflexive
bool AntiReflexive(int _matrix[][4]) {
	bool value = false;
	int i = 0, j = 0;
	for (size_t f = 0; f < sizeof(_matrix); f++)
	{
		if (_matrix[i][j] == 1) {
			value = false;
			break;
		}
		else if (_matrix[i][j] == 0) {
			value = true;
		}
		i++, j++;
	}
	return value;
}

// Symmetric
bool Symmetric(int _matrix[][4]) {
	bool value = false;

	/*
		a01, a02, a03
		a12, a13
		a23
	*/

	if (
		_matrix[0][1] + _matrix[1][0] == 1
		|| _matrix[0][2] + _matrix[2][0] == 1
		|| _matrix[0][3] + _matrix[3][0] == 1
		|| _matrix[1][2] + _matrix[2][1] == 1
		|| _matrix[1][3] + _matrix[3][1] == 1
		|| _matrix[2][3] + _matrix[3][2] == 1
		) {
		value = false;
		return value;
	}
	else {
		value = true;
	}

	return value;
}

// Anti-Symmetric
bool AntiSymmetric(int _matrix[][4]) {
	bool value = false;
	if (
		_matrix[0][1] + _matrix[1][0] == 2
		|| _matrix[0][2] + _matrix[2][0] == 2
		|| _matrix[0][3] + _matrix[3][0] == 2
		|| _matrix[1][2] + _matrix[2][1] == 2
		|| _matrix[1][3] + _matrix[3][1] == 2
		|| _matrix[2][3] + _matrix[3][2] == 2
		) {
		value = false;
		return value;
	}
	else {
		value = true;
	}
	return value;
}

// Asymmetric
bool Asymmetric(int _matrix[][4]) {
	bool value = false;
	(AntiReflexive(_matrix) && AntiSymmetric(_matrix)) ? value = true : value = false;
	return value;
}