#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next, *prev;

	Node() : data(0), next(nullptr), prev(nullptr)  {}
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
};

class Stack{

	private: 
		Node *top = NULL;
		Node *middle = NULL;
		int sz = 0;
	public:
		int Push(int val){
			Node *tmp = new Node(val);
			tmp->next = top;
			if(top != NULL)
				top->prev = tmp;
			top = tmp;
			sz++;
			if(middle == NULL)
				middle = top;
			else if(sz%2==0)
				middle = middle->prev;
			return tmp->data;
		}
		

		void Pop(){
			if(top == NULL){
				cout<<"Stack is empty!!\n";
				return;
			}
			if(sz == 1)
				middle = top;
			else if(sz%2==0)
				middle = middle -> next;
			Node *tmp = top;
			top = top->next;
			free(tmp);
			sz--;
		}
		
		int Size(){
			return sz;
		}
		
		int Top(){
			if(top == NULL){
				cout<<"Stack is empty!!\n";
				return -1;
			}	
			return top->data;
		}

		int getMiddle(){
			if (sz)
				return middle->data;
			cout<<"Stack is Empty\n";
			return -1;
		}

		void deleteMiddle(){
			Node *temp1 = middle->next;
			Node *temp2 = middle->prev;

			// cout<<(temp1==NULL || temp2==NULL);

			temp2->next = temp1;
			temp1->prev = temp2;

			Node *tmp = middle;
			free(tmp);
			sz--;
			middle = temp1;
		}
};

int main(){
 	Stack st;
 	for(int i=0; i<10; i++){
 		st.Push(i);
 		cout<<st.getMiddle()<<' ';
 	}
 	st.deleteMiddle();
 	cout<<st.getMiddle()<<' ';
 	st.deleteMiddle();
 	cout<<st.getMiddle()<<' ';
 	cout<<endl;

}