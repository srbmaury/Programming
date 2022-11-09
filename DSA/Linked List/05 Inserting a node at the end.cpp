#include<iostream>
using namespace std;


void input(string s, int &a){
	cout<<s<<": "; fflush(stdout);
	cin>>a;
	cout<<a<<endl; 
}

struct Node{
	int data;
	Node* next;
};

Node* head;

void insert(int x){

	Node* temp = new Node();
	(*temp).data = x;
	(*temp).next = NULL;

	if(head == NULL){
		head = temp;
		return;
	}
	Node* temp2 = new Node();
	temp2 = head;
	while((*temp2).next != NULL)
		temp2 = (*temp2).next;
	(*temp2).next = temp;
}

void Print(){
	Node* temp = new Node();
	temp = head;
	while(temp != NULL){
		cout<<(*temp).data<<' ';
		temp = (*temp).next;
	}
	cout<<'\n';
}
int main(){
	head = NULL;

	// inserting a node at the beginning of the list

	int x; 
	input("Enter the number of nodes to insert",x);

	for(int i=1; i<=x; i++){
		string s = "Enter the value of " + to_string(i) + "th node: "; fflush(stdout); 
		int val; 
		input(s, val);
		insert(val);
	}

	cout<<"The list with "<<x<<" nodes is: ";
	Print();

	insert(3);
}