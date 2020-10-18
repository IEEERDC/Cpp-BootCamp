#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"SUM OF MATRICES\n";
int m1[5][5],m2[5][5],Sum[5][5],m,n,i,j,p,q;
cout<<"Enter row and column of matrix 1:\n ";
cin>>m>>n;
cout<<"Enter row and column of matrix 2:\n ";
cin>>p>>q;
if(m==p&&n==q)
{
cout<<"Enter matrix 1:\n";
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
{
cin>>m1[i][j];
}
}
cout<<"Enter matrix 2:\n";
for(i=0;i<p;++i)
{
for(j=0;j<q;++j)
{
cin>>m2[i][j];
}
}
cout<<"Sum of matrices";
for(i=0;i<m;++i)
{
cout<<"\n";
for(j=0;j<n;++j)
{
Sum[i][j]=m1[i][j]+m2[i][j];
cout<<Sum[i][j]<<" ";
}
}
}
else
{
cout<<"Addition is not possible";
}
getch();
}
