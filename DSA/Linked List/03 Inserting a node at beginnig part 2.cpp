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

Node* insert(Node* head, int x){
	Node* temp = new Node();
	(*temp).data = x;
	(*temp).next = head;
	head = temp;
	return head;
}

void Print(Node* head){
	while(head != NULL){
		cout<<(*head).data<<' ';
		head = (*head).next;
	}
	cout<<'\n';
}
int main(){

	Node* head;
	head = NULL;

	// inserting a node at the beginning of the list

	int x; 
	input("Enter the number of nodes to insert",x);

	for(int i=1; i<=x; i++){
		string s = "Enter the value of " + to_string(i) + "th node: "; fflush(stdout); 
		int val; 
		input(s, val);
		head = insert(head, val);
	}

	cout<<"The list with "<<x<<" nodes is: ";
	Print(head);

}