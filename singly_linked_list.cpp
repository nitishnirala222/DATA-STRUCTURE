#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data ;
	struct node *next;
};
struct node *start=NULL;
struct node *createNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	return n;
}
int insertNode()
{
	struct node *temp,*t;
	temp=createNode();
	cout<<"Enter a data: ";
	cin>>temp->data;
	temp->next=NULL;
	if(start==NULL)
	start=temp;
	else
	{
		t=start;
		while(t->next!=NULL)
		t=t->next;
		t->next=temp;
	}
}
int deleteNode()
{
	struct node *d;
	d=start;
	if(d==NULL)
	cout<<"linked is underflow";
	else
	{
		d=start;
		start=start->next;
		cout<<"deleted element is "<<d->data;
		free(d);
	}
}
int display()
{
	struct node *r;
	if(start==NULL)
	cout<<"LINKed is empty";
	else{
		r=start;
	while(r!=NULL){
	cout<<r->data<<" ";
	r=r->next;
}}}
int main()
{
	int n;
cout<<"1.)for insert Node"<<endl;
cout<<"2.)for delete Node"<<endl;
cout<<"3.)for display "<<endl;
cout<<"4.)for exit "<<endl;
do
{
cout<<"Enter your choice: ";
cin>>n;
switch(n)
{
case 1:
insertNode();
break;
case 2:
deleteNode();
break;
case 3:
display();
break;
case 4:
exit(1);
break;
default:
cout<<"invalid input";
}
}while(n!=4);
}

