#include <iostream>
using namespace std;

class node{
	public:	
		int data;
		node *next;
		node *prev;
		node();
};

node::node(){
	cout<<"Constructor\n";
	this->data=0;
	this->next=NULL;
	this->prev=NULL;	
}


class list{

	node *head;
	
	public:
		list();
        	void addnode(int);
        	void printlist();


};

list::list(){
cout<<"constructor\n";
this->head=NULL;
}

void list::addnode(int data){
	
	node* ptr;
//	ptr =head;
	if(head == NULL){
	head=new node;
        cout<<"head is"<<head<<endl;
	//cout<<"ptr is"<<ptr<<endl;
	head->data=data;
	cout<<"head data"<<head->data<<endl;
        head->next = NULL;
        head->prev=NULL;
	}
	else{
		ptr = head;
		while(ptr->next)
			ptr = ptr->next;
		node* temp=ptr;
	//	ptr=ptr->next;
		ptr->next = new node;
		ptr->next->data=data;
		cout<<"ptrdata is"<<ptr->data<<endl;
		cout<<"ptr->prevdata is"<<temp->data;
		ptr->next->next = NULL;
		ptr->next->prev=temp;
	}	
	
}

void list::printlist(){
	cout<<"Printing list...";
	node* ptr=this->head;
	if(ptr==NULL)cout<<"list empty\n";
	else{
	 while(ptr){
		cout<<ptr->data<<"->";
		ptr = ptr->next;
		}
	cout<<endl;
	}
}



int main(int argc, char *argv[]){

int *p = NULL;
int *q = p;
cout<<"p="<<p<<endl;
cout<<"q="<<q<<endl;
list *a=new list;
a->addnode(1);
a->printlist();
a->addnode(2);
a->printlist();

a->addnode(3);
a->printlist();
/*a->adddata(a,4);
a->print(a);
a->adddata(a,5);
a->print(a);
a->adddata(a,6);
a->print(a);
a->adddata(a,7);
a->print(a);
*/
return 0;
}
