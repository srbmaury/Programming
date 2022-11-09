#include<iostream>
int main(){
    int n=10;
    void *ptr=&n;         // void pointer 
    int *ptr2=NULL;       // null pointer
    // same as
    // int *ptr2=0;       // null pointer
    // dangling pointer is a pointer which points to some non existing memory location
    /* wild pointers are also known as uninitialized pointers 
    they usually point to some arbitary memory location and may cause a program to crash or misbehave
    int *p;
    *p=10;   */
    printf("%d\n", *(int*)ptr);
    printf("%d\n", ptr2);
    return 0;
}
