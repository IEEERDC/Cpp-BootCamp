#include<iostream.h>
#include<conio.h>
int Findpos(int[],int,int);
int main()
{
int AR[50],ITEM,index,N;
clrscr();
cout<<"\n***INSERTING ELEMENT***\n";
cout<<"\nEnter the array size:";
cin>>N;
cout<<"\n\nEnter array elements(must be sorted in ascending order):\n";
for(int i=0;i<N;i++)
{
cin>>AR[i];
}
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"Enter element to be inserted:";
cin>>ITEM;
index=Findpos(AR,N,ITEM);
for(i=N;i>index;i--)
 {
AR[i]=AR[i-1];
}
AR[index]=ITEM;
N+=1;
 cout<<"\nThe array now is shown as below\n";
for(i=0;i<N;++i)
{
cout<<AR[i]<<"  ";
}

cout<<"\nWant to insert more elements?(y/n):";
cin>>ch;
}

cout<<endl;
return 0;
}
int Findpos(int AR[],int size,int item)
{
int pos;
if(item<AR[0])
pos=0;
else
{
for(int i=0;i<size-1;++i)
{
if(AR[i]<item&&item<AR[i+1])
{
pos=i+1;
break;
}
}
if(i==size-1)
pos=size;
}
return pos;
}
