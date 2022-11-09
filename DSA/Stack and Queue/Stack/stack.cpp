#include<iostream>
using namespace std;

class Stack{
	private: 
		int arr[100];
		int idx = -1;
	public:
		int Push(int val){
			if(idx == 99){
				cout<<"Stack overflow\n";
				return -1;
			}
			return arr[++idx] = val;
		}
		
		int Pop(){
			return arr[idx--];
		}
		
		int Size(){
			return idx+1;
		}
		
		int Top(){
			if(idx == -1){
				cout<<"Stack is Empty\n";
				return -1;
			}
			return arr[idx];
		}
};

int main(){
 	Stack st;
 	st.Push(9);
 	st.Push(0);
 	int arr[5] = {1,2,3,4,5};
 	cout<<st.Size()<<' ';
 	cout<<st.Top()<<' ';
 	cout<<st.Pop()<<' ';
 	cout<<st.Top()<<' ';
 	cout<<st.Size()<<' ';
 	cout<<arr[0] + arr[3];
}