#include <iostream>
using namespace std;

int main()
{
	int size = 4, val = 3;
	int arr[] = { 1,2,3,4 };

	for (int i = 0; i < size; i++)
		if (arr[i] == val)
		{
			cout << "Value Found" << endl;
			break;
		}
	return 0;
}