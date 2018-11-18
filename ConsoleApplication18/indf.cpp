#include "ind_.h"
#include "pch.h"
#include "time.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
const int SIZE = 20;
void choice(int arr[])
{
	int x;
	cout << "Select array initialization method" << endl;
	cout << "Press 1 to use random ini" << endl;
	cout << "Press 2 to use keyboard ini" << endl;
	cout << "Press 3 to use task ini" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		srand(time(NULL));
		for (int i = 1; i <= SIZE; i++)
		{
			arr[i] = rand() % 201 - 100;
			cout << arr[i] << endl;
		}
	}; break;
	case 2:
	{

		for (int i = 1; i <= SIZE; i++)
		{
			cin >> arr[i];
		}

	}break;
	case 3:
	{


		for (int i = 1; i <= SIZE; i++)
		{
			arr[i] = ((4 * pow(i, 3)) - (17 * i) + (6 * 6));
			cout << arr[i] << endl;
		}
	}; break;

	default: cout << "Choise another key" << endl; break; //SELECT
	}

}


void mas_max(int arr[])
{
	int arr_max = 1;

	for (int i = 2; i <= SIZE; i++)
	{
		if (arr[i] > arr[arr_max])
		{
			arr_max = i;

		}
	}
	cout << "Max element of array is " << arr[arr_max] << "[" << arr_max << "]" << endl;
}

void mas_sum(int arr[])
{
	int sum = 0;
	for (int i = 1; i <= SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Sum elements of array is " << sum << endl;
}
void task(int arr[])
{
	cout << "Elements which multiples 3 and bigger than 25 :" << endl;
	for (int i = 1; i <= SIZE; i++)
	{
		if (arr[i] > 25 && arr[i] % 3 == 0)
		{
			cout << arr[i] << endl;
		}
	}
}
