 #include<iostream>
using namespace std;
int L_search(int arr[],int s,int N)
{
	for(int i=0;i<s;i++)
	{
		if(arr[i]==N)
		{
			cout<<"search successful at index "<<i+1;
			return 1;
		}
	}
	cout<<"search unsuccessful";
}
int main()
{
	int n,size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int ar[size];
	cout<<"enter "<<size<<" elements: ";
	for(int i=0;i<size;i++)
	cin>>ar[i];
	cout<<"Enter a number which you want to search: ";
	cin>>n;
	L_search(ar,size,n);
}
