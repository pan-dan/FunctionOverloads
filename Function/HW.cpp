#include <iostream>

using namespace std;

void FillRand (int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print (int arr[], const int n);

int Sum (int arr[], const int n);		//���������� ����� ��������� �������
double Avg (int arr[], const int n);					//���������� ������� �������������� ��������� �������
int minValueIn(int arr[], const int n);		//����������  ����������� � ������������ �������� �� �������
int maxValueIn(int arr[], const int n);
void Sort(int arr[], const int n, int buffer, int l);					//��������� ������ � ������� �����������


void main()
{
	setlocale(LC_ALL, "Rus");

	const int n = 5;
	int arr[n];
	int min = 0;
	int max = 0;
	int buffer = 0;
	int l = 0;
	
	
	

	//cout << "���������� ������� � ������� �����������: " << Sum << endl;


																					 ////////////////////////////////////////////
																					 // ���������� ������� ���������� ������� //
																					 //////////////////////////////////////////
					 
	// ���������
	cout << "���������� ������� ���������� �������: " << endl;
	FillRand(arr, n);

	// ����� �� �����
	Print(arr, n);
	cout << endl;

																					//////////////////////////////
																					// C���� ��������� ������� //
																					////////////////////////////

	cout << "����� ��������� ������� �����: " << Sum(arr, n) << endl;

																					///////////////////////////////////////////////
																					// ������� �������������� ��������� �������	//
																					/////////////////////////////////////////////

	cout << "������� �������������� ��������� ������� �����: " << Avg(arr, n)<< endl;

																					/////////////////////////////////////////////////////
																					// ����������� � ������������ �������� �� ������� //
																					///////////////////////////////////////////////////

	cout << "������������������� �� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� �� �������: " << maxValueIn(arr, n) << endl;

															/////////////////
																					// ���������� //
																					///////////////

	cout << "���������� ������� �� �����������: " << endl;
	Sort(arr, n, buffer, l);
	cout << endl;
	




}


//----------------------------------------------------------------------------------------------

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
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


int Sum(int arr[], const int n)
{
	int sum = 0;
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


int minValueIn(int arr[], const int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

void Sort(int arr[], const int n, int buffer, int l)
{

	for (int i = 0; i < n; i++)
	{

		for (int i = 0; i < n; i++)
		{

			if (arr[l] < arr[i])
			{
				buffer = arr[l];

				arr[l] = arr[i];

				arr[i] = buffer;

			}

		}

		l++;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}