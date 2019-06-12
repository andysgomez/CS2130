#include <iostream>
using namespace std;

int main()
{
	// Create matrices
	// 2x2, 2x3, 3x2, 3x3
	int m2x2[2][2] =
	{
		{1,2},
		{3,4}
	};

	int m2x3[2][3] =
	{
		{5,6,7},
		{8,9,10}
	};

	int m3x2[3][2] =
	{
		{11,12},
		{13,14},
		{15,16}
	};

	int m3x3[3][3] =
	{
		{17,18,19},
		{20,21,22},
		{23,24,25}
	};

	for (auto& rows : m3x3)
	{
		for (auto& elem : rows)
		{
			cout << elem << endl;
		}
	}

	system("pause");
	return 0;
}// END MAIN
