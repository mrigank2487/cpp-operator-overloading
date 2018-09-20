#include<iostream>
using namespace std;

class time
{
	int h,m;
public:

	time()
	{;}

	time(int d)
	{
		h=d/60;
		m=d%60;
	}

	void display()
	{
		cout<<"Hours= "<<h<<endl;
		cout<<"Minutes ="<<m<<endl;
	}
};

int main()
{
	time T;
	int duration;
	cout<<"Enter duration in minutes: ";
	cin>>duration;
	T=duration;
	T.display();
	system("pause");
	return 0;
}

