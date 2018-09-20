#include<iostream>
using namespace std;

class test
{
	int x,y;
public:
	void getxy()
	{
		cout<<"Enter a value: ";
		cin>>x;
		cout<<"Enter another value: ";
		cin>>y;
	}

	void operator -()
	{
		x=-x;
		y=-y;
	}

	void display()
	{
		cout<<x<<endl;
		cout<<y<<endl;
	}
};

	int main()
	{
		test T;
		T.getxy();
		-T;
		T.display();
		system("pause");
		return 0;
	}

