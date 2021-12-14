#include<iostream>
#include<conio.h>
using namespace std;
int a,b,fact;
main ()
{
	cout<<"ingrese un numero al que quiere sacar el factorial "<<endl;
	cin>>a;
	fact=1;
	for (b=1;b<=a;b++)
	{
		fact=b*fact;
	}
	cout <<"el factorial del escrito es "<<fact<<endl;
	getch();		
}
