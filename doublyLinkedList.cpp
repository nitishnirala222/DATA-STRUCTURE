#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *pre,*next;
};
struct node *start=NULL;
int insertNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	cout<<"please enter data: ";
	cin>>n->data;
	n->pre=NULL;
	n->next=NULL;
	if(start==NULL)
	start=n;
	else
	{
		start->pre=n;
		n->next=start;
		start=n;
	}
}
int deleteNode()
{
	struct node *r;
	if(start==NULL)
	cout<<"LIst is Empty";
	else
	{
	r=start;
	start=start->next;
	start->pre=NULL;
	cout<<"deleted element is: "<<r->data<<endl;;
	free(r);
}}
int display()
{
    struct node *d;
    d=start;
	while(d!=NULL)
	{
		cout<<d->data<<"-> ";
		d=d->next;
	}
	cout<<endl;
}
int main()
{
	int ch;
	cout<<"1.for insert Node"<<endl;
	cout<<"2.for delete Node"<<endl;
	cout<<"3.for display Node"<<endl;
	cout<<"4.for Exit"<<endl;
	do
	{
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
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
							default :
								cout<<"Invalid input";
		}
	}while(ch!=4);
}
