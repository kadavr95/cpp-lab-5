#include <iostream.h>
#include <conio.h>

void main()
{
	int x,i=0;
	char s[100];
	cout<<"Enter numbers: ";
	do
		{
			cin>>x;
			i++;
        }
	while (x>0);

	cout<<"Result: "<<i;
	getch();
}
