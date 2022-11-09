#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};
Node* A;
int main(){
	A = NULL;


	// [A]-->NULL


	// Node* temp = (Node*)malloc(sizeof(Node));
	Node* temp = new Node();


	// [temp] ---> [ ][ ]


	(*temp).data = 2;           // temp -> data = 2;
	(*temp).next = NULL;        // temp -> next = NULL;

	// [temp] ---> [2][NULL]

	A = temp;

	// [A] ---> [2][NULL]

	temp = new Node();

	// [A] ---> [2][NULL]    [temp] ---> [ ][ ]


	(*temp).data = 4;
	(*temp).next = NULL;

	// [A] ---> [2][NULL]    [temp] ---> [4][NULL]


	Node* temp1 = A;
	while((*temp1).next != NULL){
		temp1 = (*temp1).next;
	}

	// [A] ---> [2][NULL]    [temp] ---> [4][NULL]
	//           ^
    //           |
    //          [temp1]
	(*temp1).next = temp;


	// [A] ---> [2][ADDRESS] -----> [4][NULL]
	//           ^                ^  
    //           |                |  
    //          [temp1]         [temp]

	temp = new Node();
	// [A] ---> [2][ADDRESS] -----> [4][NULL]    [temp] ---> [ ][ ]
	//           ^
    //           |
    //          [temp1]
	(*temp).data = 6;
	(*temp).next = NULL;

	// [A] ---> [2][ADDRESS] -----> [4][NULL]    [temp] ---> [6][NULL]
	//           ^
    //           |
    //          [temp1]


	while((*temp1).next != NULL) 
		temp1 = (*temp1).next;

	// [A] ---> [2][ADDRESS] -----> [4][NULL]    [temp] ---> [6][NULL]
	//                            ^
    //                            |
    //                           [temp1]



	(*temp1).next = temp;


	// [A] ---> [2][ADDRESS] -----> [4][ADDRESS] ---> [6][NULL]
	//                            ^              ^
    //                            |              |
    //                           [temp1]       [temp]  

	temp1 = A;

	// [A] ---> [2][ADDRESS] -----> [4][ADDRESS] ---> [6][NULL]
	//           ^                               ^
    //           |                               |
    //          [temp1]                        [temp] 

	while(temp1 != NULL){
		cout<<(*temp1).data<<' ';
		temp1 = (*temp1).next;
	}
}