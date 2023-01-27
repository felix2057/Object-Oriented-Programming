// WAP to demonstrate the order of call of constructors and destructors in case of virtual base class
//  CPP program to illustrate
//  calling virtual methods in
//  constructor/destructor
#include <iostream>
using namespace std;

class dog
{
public:
	dog()
	{
		cout << "Constructor called" << endl;
		bark();
	}

	~dog()
	{
		cout << "DESTRUCTOR";
	}

	virtual void bark()
	{
		cout << "BARK" << endl;
	}

	void seeCat()
	{
		bark();
	}
};

class Yellowdog : public dog
{
public:
	Yellowdog()
	{
		cout << "Derived class Constructor " << endl;
	}
	void bark()
	{
		cout << "Derived class BARK" << endl;
	}
};

int main()
{
	Yellowdog d;
	d.seeCat();
}
