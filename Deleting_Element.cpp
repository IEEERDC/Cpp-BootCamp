#include<iostream.h>
#include<conio.h>
int Lsearch(int[],int,int);
void main()
{
clrscr();
cout<<"\n***DELETION***\n";
int AR[50],ITEM,N,index;
cout<<"\nEnter the array size:";
cin>>N;
cout<<"\nEnter Array elements\n";
for(int i=0;i<N;++i)
{
cin>>AR[i];
}
char ch;
do
{
cout<<"\nEnter Element to be deleted :";
cin>>ITEM;
index=Lsearch(AR,N,ITEM);
if(index==-1)
cout<<"\nSorry!! Item could not be found ";
else
{
for(i=index;i<N;++i)
AR[i]=AR[i+1];
N=N-1;
cout<<"\nThe new array is\n ";
for(i=0;i<N;++i)
cout<<AR[i]<<"  ";
}
cout<<"\nDo you want to delete more elements(y/n):";
cin>>ch;
}
while(ch=='y'||ch=='Y');
getch();
}
int Lsearch(int AR[],int size ,int item)
{
for(int i=0;i<size;++i)
{
if(AR[i]==item)
return i;
}
return -1;
}

