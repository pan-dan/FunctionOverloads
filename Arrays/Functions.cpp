#include "Functions.h"

void FillRand(int arr[], const int n, int minRand, int maxRand)
{

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}


}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}


}

void FillRand(int arr[ROWS][COLS], const int m, const int n)
{

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}


}

void FillRand(double arr[ROWS][COLS], const int m, const int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = double(rand() % 10000) / 100;
		}
	}


}


void Print(int arr[], const int n)
{
	// Вывод на экран

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}

void Print(double arr[], const int n)
{
	// Вывод на экран

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}

void Print(int arr[ROWS][COLS], const int m, const int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


}

void Print(double arr[ROWS][COLS], const int m, const int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	int iterations = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				for (int l = 0; l < n; l++)
				{
					iterations++;
					if (arr[i][j] < arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

	cout << "Количество итераций: " << iterations << endl;;
}