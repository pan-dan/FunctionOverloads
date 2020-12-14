#include <iostream>

using namespace std;

const int m = 8;
const int n = 3;

void FillRand(int A[m][n], const int m, const int n);
void Print(int A[m][n], const int m, const int n);

void main()
{
	setlocale(LC_ALL, "Rus");

	
	int A[n][n];
	FillRand(A, n, n);
	Print(A, n, n);

	cout << "----------------------------------------------" << endl;

	int B[n][n * 2];		//Расширенная матрица 

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B [i][j+n] = A[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	// Вычисление определителя:
	// 1)Вычисление главной диагонали:
	int multiply;
	int sum_diag_1_main = 0;

	for (int i = 0; i < n; i++)
	{
		int multiply = 1;
		for (int j = 0; j < n; j++)
		{
			multiply *= B[j][j + i];
		}
		sum_diag_1_main += multiply;
	}

	cout << "Сумма произведений элементов главной дианонали: " << sum_diag_1_main << endl;
	
	// 2)Вычисление вспомогательной диагонали:
	int sum_diag_aux = 0;
	for (int i = 0; i < n; i++)
	{
		int multiply = 1;
		for (int j = 0; j < n; j++)
		{
			multiply *= B[n - j - 1][j + i];
		}
		sum_diag_aux += multiply;
	}


	cout << "Сумма произведений элементов вспомогательной дианонали: " << sum_diag_aux << endl;
	cout << "Определитель матрицы: " << sum_diag_1_main - sum_diag_aux << endl;
}

void FillRand(int A[m][n], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

}

void Print(int A[m][n], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
}