#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"***PRODUCT OF MATICES***\n";
int m1[5][5],m2[5][5],Pro[5][5],m,n,i,j,p,q,k;
cout<<"Enter row and column of matrice 1:\n ";
cin>>m>>n;
cout<<"Enter row and column of matrice 2:\n ";
cin>>p>>q;
if(n==p)
{
cout<<"Enter matrix 1:";
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
{
cin>>m1[i][j];
}
}
cout<<"Enter matrix 2:";
for(i=0;i<p;++i)
{
for(j=0;j<q;++j)
{
cin>>m2[i][j];
}
}
cout<<"Product of matrices";
for(i=0;i<m;++i)
{
cout<<"\n";
for(j=0;j<q;++j)
{
Pro[i][j]=0;
for(k=0;k<n;++k)
{
Pro[i][j]=Pro[i][j]+m1[i][k]*m2[k][j];
}
cout<<Pro[i][j]<<" ";
}
}

}
else
{
cout<<"Multiplication is not possible";
}
getch();
}
