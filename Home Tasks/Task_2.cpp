#include <iostream>
#include "Task_1.h"
using namespace std;

int main()
{
	Employee* one = new FullTimeEmployee(1000);
	Employee* two = new PartTimeEmployee(2, 300);

	one->calculatesalary();
	two->calculatesalary();

	system("pause");
	return 0;
}