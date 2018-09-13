#include <iostream>
using namespace std;
#include "MatrixTranspose.h"
#include "MatrixAddSub.h"
#include "MatrixMultiply.h"


int main(){
	int input;
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;

	cout << "Select what you want to perform" << endl;
	cout << "1. Add Matrix" << endl;
	cout << "2. Subtract Matrix" << endl;
	cout << "3. Multiply Matrix" << endl;
	cout << "4. Calculate Transpose of Matrix" << endl;
	cin >> input;

	if (input == 1){
		cout << "Enter number of rows (between 1 and 100): ";
		cin >> r;

		cout << "Enter number of columns (between 1 and 100): ";
		cin >> c;

		cout << endl << "Enter elements of 1st matrix: " << endl;

		// Storing elements of first matrix entered by user.
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
		// Displaying the matrix a[][]
		cout << endl << "Entered Matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << " " << a[i][j];
			if (j == c - 1)
				cout << endl;
		}
		// Storing elements of second matrix entered by user.
		cout << endl << "Enter elements of 2nd matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
		// Displaying the matrix b[][]
		cout << endl << "Entered Matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << " " << b[i][j];
			if (j == c - 1)
				cout << endl;
		}
		MatrixAdd(a, b, r, c);
	}
	else if (input == 2){
		cout << "Enter number of rows (between 1 and 100): ";
		cin >> r;

		cout << "Enter number of columns (between 1 and 100): ";
		cin >> c;

		cout << endl << "Enter elements of 1st matrix: " << endl;

		// Storing elements of first matrix entered by user.
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
		// Displaying the matrix a[][]
		cout << endl << "Entered Matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << " " << a[i][j];
			if (j == c - 1)
				cout << endl;
		}
		// Storing elements of second matrix entered by user.
		cout << endl << "Enter elements of 2nd matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
		// Displaying the matrix b[][]
		cout << endl << "Entered Matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << " " << b[i][j];
			if (j == c - 1)
				cout << endl;
		}
		MatrixSubtract(a, b, r, c);
	}
	else if (input == 3){
		MatrixMultiply();
	}
	else if (input == 4){
		cout << "Enter number of rows (between 1 and 100): ";
		cin >> r;

		cout << "Enter number of columns (between 1 and 100): ";
		cin >> c;

		cout << endl << "Enter elements of 1st matrix: " << endl;

		// Storing elements of first matrix entered by user.
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
		// Displaying the matrix a[][]
		cout << endl << "Entered Matrix: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << " " << a[i][j];
			if (j == c - 1)
				cout << endl;
		}

		MatrixTranspose(a, r, c);
	}

	system("pause");
	return 0;
}