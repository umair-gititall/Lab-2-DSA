#include <iostream>
using namespace std;

int main()
{
	int size = 9;
	int arr[] = { 1,2,3,4,5,9,0,8,-1 };

	for (int i = size - 1; i > 0; i--) {
		for (int j = i - 1; j > 0; j--)
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		cout << arr[i] << endl;
	}
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	return 0;
}