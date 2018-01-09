#include <iostream>

struct MyStruct
{
	int example1;
	int int2;
};

class MyClass
{
public:
	MyClass()	// Constructor
	{
		publicVar = 10;
		privateVar = 20;
		protectedVar = 10;
	}

	~MyClass()
	{
		// Destructor
	}

	int publicVar;	// member variable of class MyClass

	// Mutator
	void SetPrivateVar(int value)
	{
		if (value >= 10)
		{
			privateVar = value;
		}
	}

	// Getter
	int GetPrivateVar()
	{
		return privateVar;
	}

private:
	int privateVar;

protected:
	int protectedVar;

};

int main(int argc, char* argv[])
{
	MyStruct a = {1, 2};
	MyClass b = {};
	MyClass* bPtr = new MyClass();

	b.publicVar = 0;
	b.SetPrivateVar(20);
	int bv = b.GetPrivateVar();
	bv = 10;

	return 0;
}