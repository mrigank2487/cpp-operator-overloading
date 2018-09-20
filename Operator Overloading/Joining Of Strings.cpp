#include<iostream>
using namespace std;

class String
{
	int length;
	char *name;
	
public:
	
	String()
	{
		length = 0;
		name = new char[length+1];
		
	}
	
	String(char *s)
	{
		length = strlen(s);
		name = new char[length+1];
		strcpy(name,s);
	}

	void display()
	{
		puts(name);
		cout<<endl;
	}

	String operator +(String s2);
	int operator >(String s2);
};

	int main()
	{
		String s1("Mrigank"),s2("Doshy"),s3;

		s1.display();
		s2.display();
		
		s3=s1+s2;
		s3.display();

		if(s1>s2) 
		{
			s1.display();
		    cout<<"is greater than ";
			s2.display();
		}
		else
		{
			s2.display(); 
			cout<<"is greater than "<<endl;
			s1.display();
		}


		system("pause");
		return 0;

	}

	String String :: operator +(String s2)
	{
		String s4;
		s4.length=length+s2.length;
		strcpy(s4.name,name);
		strcat(s4.name,s2.name);
		return(s4);
	}

	int String :: operator >(String s2)
	{


		if(length>s2.length)
			return 1;
		else 
			return 0;
	}
	