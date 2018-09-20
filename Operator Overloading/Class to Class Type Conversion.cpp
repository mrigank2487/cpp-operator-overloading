#include<iostream>
using namespace std;

class invent2;

class invent1
{
	int code, items;
	float price;
public:
	invent1(int a, int b, float c)
	{
		code=a;
		items=b;
		price=c;
	}

	void putdata()
	{
		cout<<"Code: "<<code<<endl;
		cout<<"Items: "<<items<<endl;
		cout<<"Price: "<<price<<endl;
	}

	int getcode()
	{
		return code;
	}

	int getitems()
	{
		return items;
	}

	float getprice()
	{
		return price;
	}

	operator float()
	{
		return (items*price);
	}

};

class invent2
{
	int code;
	float value;
public:
	invent2()
	{
		code=0;
		value=0;
	}

	invent2(int x, float y)
	{
		code=x;
		value=y;
	}

	void putdata()
	{
		cout<<"Code: "<<code<<endl;
		cout<<"Value: "<<value<<endl;
	}

	invent2(invent1 p)
	{
		code=p.getcode();
		value=p.getitems()*p.getprice();
	}
};

int main()
{
	invent1 s1(100,5,140.0);
	invent2 d1;
	float total_value;

	total_value=s1;
	d1=s1;

	cout<<"Product details - invent1 type: ";
	s1.putdata();
	cout<<endl;
	cout<<"Stock Value"<<endl;
	cout<<"Value= :"<<total_value<<endl<<endl;

	cout<<"Product details - invent2 type: ";
	d1.putdata();
	cout<<endl;

	system("pause");
	return 0;
}


