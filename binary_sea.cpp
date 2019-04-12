#include<iostream>
using namespace std ;
int BinarySearch(int arr[],int n,int N)
{
int l=0,u=n,m;
while(l<=u)
{
m=(l+u)/2;
if(arr[m]==N)
{
cout<<"search successful";
return 1;
}
else if(N>arr[m])
l=m+1;
else
u=m-1;
}
cout<<" Search Unsuccessful";
}
int main()
{
int ar[]={11,22,33,44,55,66,77,88,100};
BinarySearch(ar,9,33);
}
