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


	int cols = sizeof(m2x3[0]) / sizeof(m2x3[0][0]);

	//cout << rows << " " << cols << endl;



	system("pause");
	return 0;
}// END MAIN

/*Calculate size of ROW*/
int FindRows(int _matrix) {
	int rows = sizeof(_matrix) / sizeof(_matrix[0]);
}

/*Find size of COLUMN*/
int FindColumns() {

}

/*Test if Multiplication can be performed*/

/*Test if Addition can be performed*/

/*MULTIPLICATION*/

/*ADDITION*/

/*Print matrix*/
void PrintMatrix() {
	/*for (auto& rows : _matrix[0][])
	{
		for (auto& elem : rows)
		{
			cout << elem << endl;
		}
	}*/
}