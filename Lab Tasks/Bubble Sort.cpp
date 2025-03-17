#include <iostream>
using namespace std;

int main()
{
	int size = 5;
	int arr[] = { 1,2,3,4,5 };

	for (int i = 0; i < size; i++)
		for (int j = i; j < size; j++)
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	return 0;
}