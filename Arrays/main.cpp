#include"Functions.h"

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
	FillRand(brr, n);
	Print(brr, n);

	cout << "|------------------------------------------------|" << endl;

	cout << "��������� ������ ���� int:\n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);

	cout << "��������������� ��������� ������ ���� int: \n";
	Sort(arr2, ROWS, COLS);
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

	cout << "  ������� �������������� ��������� �������: " << Avg(arr, n) << endl;

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