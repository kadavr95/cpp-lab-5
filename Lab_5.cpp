#include <iostream.h>
#include <conio.h>
#include <system.hpp>
#include <string>
#include <ustring.h>
#include <sysmac.h>
using namespace std;

void main()
{
	int x,i=0;
	//char s[100];
	//String s;
	std::string s;
	cout<<"Enter numbers: ";
	do
		{
			std::string str;
			std::cin>>str;
			std::cin>>s;
			i++;
		}
	//while (s.IsEmpty()==false);
	//while("".equals(s)==false);
	//while (s==null);

	cout<<"Result: "<<i;
	getch();
}
