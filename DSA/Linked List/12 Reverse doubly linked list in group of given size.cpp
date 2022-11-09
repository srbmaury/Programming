#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *prev;
	Node *next;

	Node(int val){
		data = val;
		prev = next = NULL;
	}
};

Node* reverse_in_groups(Node* head, int k){

	if(head == NULL || k == 1) return head;

	Node *dummy = new Node(0);
	dummy -> next = head;

	Node *curr = dummy, *nex = dummy, *pre = dummy;

	int ct = 0;
	while(curr -> next != NULL){
		cout<<curr->data<<' ';
		curr = curr -> next;
		ct++;
	}

	while(ct >= k){
		curr = pre->next;
		nex = curr->next;
		for(int i=1;i<k;i++){
			curr -> next = nex -> next;
			nex -> next = pre -> next;
			pre -> next = nex;
			nex = curr -> next;
		}
		pre = curr;
		ct -= k;
	}

	dummy = dummy -> next;
	while(dummy != NULL){
		cout<<dummy->data<<' ';
		dummy = dummy -> next;
	}
	return dummy->next;
}

    

Node* insert(Node *head){
	int x; cin>>x;
	Node *temp = new Node(x);
	if(head == NULL){
		head= temp;
		return head;
	}
	Node *tmp2 = head;
	while(tmp2 -> next != NULL) tmp2 = tmp2 -> next;
	tmp2 -> next = temp;
	temp->prev = tmp2;
	return head;
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<' ';
		if(head -> next == NULL) break;
		head = head -> next;
	}
	cout<<'\n';
	while(head != NULL){
		cout<<head -> data<<' ';
		head = head -> prev;	
	}
}
int main(){
	Node *head=NULL;

	for(int i=0;i<5;i++)
	head = insert(head);


	head = reverse_in_groups(head,2);
	print(head);

	// cout<<' '; cout<<head ->data;
	// cout<<' '; cout<<head->next->data;
	// cout<<' '; cout<<head->next->next->data;
	// cout<<' '; cout<<head->next->next->next->data;
	// cout<<' '; cout<<head->next->next->next->next->data;
	// cout<<' ';
}