#include<iostream>
using namespace std;
const int size=3;

class vector
{
	int v[size];
public:
	vector()
	{
		for (int i=0; i<size; i++)
			v[i]=0;
	}

	vector(int *x)
	{
		for (int i=0; i<size; i++)
			v[i]=x[i];
	}

	friend vector operator *(int a, vector b);
	friend vector operator *(vector b, int a);
	friend istream & operator >>(istream &din, vector &b);
	friend ostream & operator <<(ostream &dout, vector &b);

	
};



	int x[size]={2,4,6};

	int main()
	{
		vector m;
		vector n=x;

		cout<<"Enter elements of vector 'm': ";
		cin>>m;
		cout<<"m= "<<m;
		cout<<endl;

		vector p,q;
		p=2*m;
		q=m*2;
		 cout<<"p= "<<p;
		 cout<<endl;
		 cout<<"q= "<<q;
		 cout<<endl;

		 system("pause");
		 return 0;

	}


	vector operator *(int a, vector b)
	{
		vector c;
		for(int i=0; i<size; i++)
			c.v[i]=b.v[i]*a;
		return c;
	}

	istream & operator >>(istream &din, vector &b)
	{
		for(int i=0; i<size; i++)
			din>>b.v[i];
		return (din);
	}

	ostream & operator <<(ostream &dout, vector &b)
	{
		
		for(int i=1; i<size; i++)
			dout<<","<<b.v[i];
		
		return (dout);
	}