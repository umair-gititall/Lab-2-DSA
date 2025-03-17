#include <iostream>
using namespace std;

class animal {
protected:
	string speak;
public:
	animal(string s) :speak(s) {}
	virtual void display() {}
	virtual string legs() = 0;
};

class horse : virtual public animal {
public:
	horse() :animal("horse speaking") {}
	void display() { cout << speak << endl; }
	string legs() { return "Horse"; }
};

class donkey : virtual public animal {
public:
	donkey() :animal("donkey speaking") {}
	void display() { cout << speak << endl; }
	string legs() { return "Donkey"; }
};

class mule :public horse, public donkey {
public:
	mule() :animal("Mule speaking") {}
	void display() { cout << speak << endl; }
	string legs() { return "Mule"; }
};

int main()
{
	animal* ptr = new horse;
	animal* ptr1 = new donkey;
	animal* ptr2 = new mule;

	ptr->display();
	ptr1->display();
	ptr2->display();

	cout << endl << "Animal Legs called :: " << ptr->legs() << endl;
	cout << "Animal Legs called :: " << ptr1->legs() << endl;
	cout << "Animal Legs called :: " << ptr2->legs() << endl;

	return 0;
}