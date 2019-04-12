//Binary Search....
#include<iostream>
using namespace std;
int Binary_S(int ar[],int k,int N)
{
int low=0,high=k,mid;
while(low<=high)
{
mid=(low+high)/2;
if(ar[mid]==N)
{
cout<<"Search Successful at index "<<mid;
return 1;
}
else if(N>ar[mid]){
low=mid+1;}
else{
high=mid-1;
}}
cout<<" Search UnSuccessful";
}
int main()
{
int n,s;
cout<<"Enter the size of Array: ";
cin>>s;
int arr[s];
cout<<"Enter "<<s<<" elements: ";
for(int i=0;i<s;i++)
{
cin>>arr[i];
}
cout<<"Enter element which you want to be search: ";
cin>>n;
Binary_S(arr,s,n);
}
