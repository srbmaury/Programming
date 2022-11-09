#include<bits/stdc++.h>
using namespace std;
class ArrayList{
    private:
        struct ControlBlock
        {
            int capacity;
            int *arr_ptr;
        };
        ControlBlock *s;
    public:
        ArrayList(int capacity){
            s=new ControlBlock;
            s->capacity=capacity;
            s->arr_ptr=new int(s->capacity);   //creates an array
        }
        void addElement(int index,int data){
            if(index>0&&index<=s->capacity-1)
            s->arr_ptr(index)=data;
            else cout<<"Array index is not valid\n";
        }
        void viewElement(int index,int &data){
            if(index>0&&index<=s->capacity-1)
            data=s->arr_ptr(index);
            else cout<<"Array index is not valid\n";
        }
        void viewList(){
            int i;
            for(i=0; i<s->capacity; i++)
            cout<<" "<<s->arr_ptr(i);
        }
};
int main(){
    int data;
    ArrayList list1(4);
    list1.addElement(0,32);
    list1.viewElement(0,data);
    return 0;
}