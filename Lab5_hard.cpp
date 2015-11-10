#include <iostream.h>
#include <string>


void main()
{
	string s;
	int n;
	do
	{
		getline(cin,s);
		//cout<<s;
		n=atoi(s.c_str());
		cout<<n;
	}
	while(s.empty()==false);
}
