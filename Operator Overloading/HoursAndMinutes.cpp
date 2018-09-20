#include<iostream>
using namespace std;
class time
{
 int h,m;
 public:
     void gettime()
     {
      cout<<"Enter time in hours and minutes: ";
      cin>>h>>m;
     }
     friend time operator +(time T1,time T2);

     void display()
     {
      cout<<"Total is: "<<h<<" hours and ";
      cout<<m<<" minutes.\n\n\n\n\n\n";
     }
};

 int main()
  {
    time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3=t1+t2;
    t3.display();
	system("pause");
	return 0;
  }

 time operator +(time T1,time T2)
     {
      time T4;
      int Q;
      T4.m=T1.m+T2.m;
      Q=T4.m/60;
      T4.h=T1.h+T2.h+Q;
      T4.m=T4.m % 60;
      return(T4);
     }