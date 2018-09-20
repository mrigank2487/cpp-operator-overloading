#include<iostream>
using namespace std;

class time
{
	int h,m;
public:

	void get_time()
	{
     cout<<"Enter hours and minutes: ";
	 cin>>h;
	 cin>>m;
	}

	operator int()
	{
		int d;
		d=h*(60+m);
		return(d);
	}
};

int main()
{
	time T;
	int duration;
	T.get_time();
	duration=T;
	cout<<"Total Duration in minutes= "<<duration<<endl;
	system("pause");
	return 0;
}

