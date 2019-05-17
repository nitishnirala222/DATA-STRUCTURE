#include<iostream>
using namespace std;
int main()
{
	int p,q;
	cout<<"enter no. of rows: ";
	cin>>p;
	cout<<"enter no. of column: ";
	cin>>q;
int sparse[p][q];
cout<<"Enter "<<p*q<<" elements respt: "<<endl;
for(int r=0;r<p;r++)
{
	for(int c=0;c<q;c++)
	{
		cin>>sparse[r][c];
	}
}
int size=0;
for(int i=0;i<p;i++)
{
for(int j=0;j<q;j++)
{
if(sparse[i][j]!=0)
size++;
}}
int sm[3][size],k=0;
for(int r=0;r<p;r++)
{
for(int c=0;c<q;c++)
{
if(sparse[r][c]!=0)
{
sm[0][k]=r;
sm[1][k]=c;
sm[2][k]=sparse[r][c];
k++;
}}
}
cout<<"The Triplet Representation is: "<<endl;;
for(int i=0;i<p;i++)
{
for(int j=0;j<size;j++)
{
cout<<sm[i][j]<<" ";
}
cout<<endl;
}
}
