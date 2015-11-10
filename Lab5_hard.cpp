#include <iostream.h>
#include <conio.h>
#include <string>


void main()
{
	string s;
	int n,q=0;
	bool f;
	cout<<"Enter numbers:\n";
	do
	{
		getline(cin,s);
		n=atoi(s.c_str());
		f=true;
		while (n%10>0)
		{
			if ((n%10)%2==1)
			{
				f=false;
				break;
			}
			n=n/10;
		}
		if ((f==true)&&(s.empty()==false))
		{
			q++;
		}
	}
	while(s.empty()==false);
	cout<<"Quanity of even numbers:"<<q;
	getch();
}
