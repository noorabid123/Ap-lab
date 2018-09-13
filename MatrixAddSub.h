#include <iostream>
using namespace std;

void MatrixAdd(int a[100][100],int b[100][100],int r,int c)
	{
		int sum[100][100], i, j;

		// Adding Two matrices
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];

		// Displaying the resultant sum matrix.
		cout << endl << "Sum of two matrix is: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << sum[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}

	}

void MatrixSubtract(int a[100][100], int b[100][100], int r, int c)
	{
		int  diff[100][100], i, j;

		// Subtracting Two matrices
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			diff[i][j] = a[i][j] - b[i][j];

		// Displaying the resultant sum matrix.
		cout << endl << "Difference of two matrix is: " << endl;
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			cout << diff[i][j] << "  ";
			if (j == c - 1)
				cout << endl;
		}

	}