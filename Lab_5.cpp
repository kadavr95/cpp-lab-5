#include <iostream.h>
#include <conio.h>
#include <system.hpp>
#include <string>

void main()
{
	int x,i=0;
	//char s[100];
	String s;
	//std::string s;
	cout<<"Enter numbers: ";
	do
		{
			std::string str;
			std::cin>>str;
			//std::cin>>s;
			i++;
		}
	while (s.IsEmpty()==false);

	cout<<"Result: "<<i;
	getch();
}
