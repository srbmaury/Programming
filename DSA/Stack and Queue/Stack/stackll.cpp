#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;

	Node() : data(0), link(nullptr)  {}
    Node(int x) : data(x), link(nullptr) {}
    Node(int x, Node *link) : data(x), link(link) {}
};

class Stack{

	private: 
		Node *top = NULL;
		int sz = 0;
	public:
		int Push(int val){
			Node *tmp = new Node(val);
			tmp->link = top;
			top = tmp;
			sz++;
			return tmp->data;
		}
		
		void Pop(){
			if(top == NULL){
				cout<<"Stack is empty!!\n";
				return;
			}
			Node *tmp = top;
			top = top->link;
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
};

int main(){
 	Stack st;
 	for(int i=0; i<10; i++){
 		st.Push(i);
 	}

 	for(int i=0; i<10; i++){
 		cout<<st.Size()<<' '<<st.Top()<<endl;
 		st.Pop();
 	}
}