#include <iostream>
using namespace std;

int main()
{
	int arr[6] = { 5040,10080,6000,0,10080,5040 };
	int totalpairs = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 6; j++)
			if ((arr[i] + arr[j]) % 10080 == 0)
			{
				cout << "Pair " << totalpairs + 1 << " :: (" << i << ", " << j << ")" << endl;
				totalpairs++;
			}
	}
	cout << "Answer :: " << totalpairs << endl;

	return 0;
}