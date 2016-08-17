#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main ()
{
clrscr();
int array[5],rep=0;
for(int i=1; i<=5; i++)
{
count<<"enter elements"<<endl;
cin>>array[i];
}
for(i=1; i<=5; i++)
{
if(array[i]==array[i+1])
{
rep=array[i];
}
}
count<<" repeat value is"<<rep;
getch();
}
