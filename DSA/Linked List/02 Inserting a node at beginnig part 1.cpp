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
	(*temp).next = head;
	head = temp;
}

void erase(){
	Node* temp = head;
	head = head -> next;
	delete temp;
	// free(temp);
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

	for(int i=1; i<=x; i++){
		string s = "List after erasing " + to_string(i) + "th node: ";
		cout<<s;
		erase();
		Print();
	}
	insert(3);
}