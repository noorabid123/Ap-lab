#include <iostream>
using namespace std;

void MatrixTranspose(int a[100][100], int r,int c)
{
	int  trans[10][10], i, j;

	// Finding transpose of matrix a[][] and storing it in array trans[][].
	for (i = 0; i < r; ++i)
	for (j = 0; j < c; ++j)
	{
		trans[j][i] = a[i][j];
	}

	// Displaying the transpose,i.e, Displaying array trans[][].
	cout << endl << "Transpose of Matrix: " << endl;
	for (i = 0; i < c; ++i)
	for (j = 0; j < r; ++j)
	{
		cout << " " << trans[i][j];
		if (j == c - 1)
			cout << endl;
	}
}
