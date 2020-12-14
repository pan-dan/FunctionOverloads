#include <iostream>

using namespace std;


const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);

void FillRand(int arr[ROWS] [COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);

int Sum (int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg (double arr[], const int n);

int minValueIn (int arr[], const int n);
double minValueIn(double arr[], const int n);

int maxValueIn (int arr[], const int n);
double maxValueIn(double arr[], const int n);

void Sort (int arr[], const int n);
void Sort(double arr[], const int n);



void main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 5;
	int arr[n];



	// ���������� ���������� �������
	cout << "���������� ������ ���� int:\n";
	FillRand(arr, n);

	// ����� �� �����

	Print(arr, n);

	cout << "|------------------------------------------------|" << endl;

	cout << "���������� ������ ���� double:\n";
	double brr[n];
	FillRand (brr, n);
	Print (brr, n);

	cout << "|------------------------------------------------|" << endl;

	cout << "��������� ������ ���� int:\n";
	int arr2 [ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

	////-------------------------------------
	//cout << "����� ��������� �������: " << Sum(arr, n) << endl;
//
	//cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	//
	//cout << "����������� �������� �������: " << minValueIn(arr, n) << endl;
	//
	//cout << "������������ �������� �������: " << maxValueIn(arr, n) << endl;
	//
	////cout << "���������� ������� �� �����������: " << 

	cout << "|------------------------------------------------|" << endl;

	cout << "��������� ������ ���� double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);

	cout << "|------------------------------------------------|" << endl;

	cout << "  ����� ��������� ������� ���� int: " << Sum(arr, n) << endl;

	cout << "|------------------------------------------------|" << endl;

	cout << "  ����� ��������� ������� ���� double: " << Sum(brr, n) << endl;
	
	cout << "|------------------------------------------------|" << endl;

	cout << "  ������� �������������� ��������� �������: " << Avg(arr,n) <<  endl;

	cout << "|------------------------------------------------|" << endl;

	cout << "  ������� �������������� ��� brr : " << Avg(brr, n) << endl;

	cout << "|------------------------------------------------|" << endl;

	cout << "  ����������� �������� ������� ���� int: " << minValueIn(arr, n) << endl;

	cout << "|------------------------------------------------|" << endl;

	cout << "  ������������ �������� ������� ���� int: " << maxValueIn(arr, n) << endl;

	cout << "|------------------------------------------------|" << endl;

	cout << "  ����������� �������� ������� ���� double: " << minValueIn(brr, n) << endl;

	cout << "|------------------------------------------------|" << endl;

	cout << "  ������������ �������� ������� ���� double: " << maxValueIn(brr, n) << endl;
	
	cout << "|------------------------------------------------|" << endl;

	cout << "��������������� ������ ���� int: \n";
	Sort(arr, n);
	Print(arr, n);

	cout << "|------------------------------------------------|" << endl;


	cout << "��������������� ������ ���� double: \n";
	Sort(brr, n);
	Print(brr, n);

	cout << "|------------------------------------------------|" << endl;
}
//------------------------------------------------

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

	for (int i = 0; i < n; i++)
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
	// ����� �� �����

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}

void Print(double arr[], const int n)
{
	// ����� �� �����

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










int Sum(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}