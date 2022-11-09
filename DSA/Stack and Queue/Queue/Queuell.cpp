#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;

	Node() : data(0), link(nullptr)  {}
    Node(int x) : data(x), link(nullptr) {}
    Node(int x, Node *link) : data(x), link(link) {}
};

class Queue{
	private: 
		int arr[100];
		int start = 0;
		int end = -1;
	public:
		int Push(int val){
			if(end == 99){
				cout<<"Stack overflow\n";
				return -1;
			}
			return arr[++end] = val;
		}
		
		int Pop(){
			if(start > end){
				cout<<"Queue is empty!!\n";
				return -1;
			}
			return arr[start++];
		}
		
		int Size(){
			return end - start + 1;
		}
		
		int Top(){
			if(start > end){
				cout<<"Stack is Empty\n";
				return -1;
			}
			return arr[start];
		}
};

int main(){
 	Queue q;
 	for(int i=0; i<10; i++){
 		q.Push(i);
 	}

 	for(int i=0; i<10; i++){
 		cout<<q.Size()<<' '<<q.Top()<<endl;
 		q.Pop();
 	}
}