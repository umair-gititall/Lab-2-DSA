#include <iostream>
#include "Task_1.h"
using namespace std;

int main()
{
	Shape* var1 = new Circle(3);
	Shape* var2 = new Rectangle(3,2);

	var1->area();
	var2->area();

	system("pause");
	return 0;
}