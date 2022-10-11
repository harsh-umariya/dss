#include<iostream.h>
#include<conio.h>

void main()
{
int mat[3][3];
int i,j;
clrscr();
cout<<"Enter element of matrix\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>mat[j][i];
}
}
cout<<"\nRow major array:"<<endl;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<mat[j][i];
cout<<"column_["<<j +1<<"]"<<endl;

}
}
getch();
}