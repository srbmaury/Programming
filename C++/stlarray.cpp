// Array is a linear collection of similar elements.
// Array container in STL provides us the implementation of static array.
//  Use header array  #include<array>

// Creating array objects
// array<object_type,array_size> array_name;
// It creates an empty array of object_type with maximum size of array_size
// array <int,4> obj;
// Assignment of values: array<int,4> odd_numbers={2,4,6,8};
/* IMPORTANT MEMBER FUNCTIONS OF ARRAY TEMPLATE
    at                  returns value in the array at the given index 
                        (if index>array size out_of_range exception is thrown)
    [] operator   
    front()             returns first element in the array
    back()              returns last element in the array
    fill()              assigns the given value to every element of the array
    swap()              swaps the content of two arrays of same type and same size (index wise swapping)            
    size()              returns number of elements in the array
    begin()    returns the iterator pointing to the first element of the array
    end()      returns the iterator pointing to an element next to the last element of the array  */
#include<iostream>
#include<array>
using namespace std;
int main(){
    array <int,5> data_array={11,22,33,44,55},arr3;
    cout<<data_array[2]<<endl;
    cout<<data_array.at(2)<<endl;   //same as above
    cout<<data_array.front()<<endl;
    cout<<data_array.back()<<endl;
    data_array.fill(3);
    for(int i=0; i<data_array.size(); i++) cout<<data_array.at(i); cout<<endl;
    cout<<data_array.size()<<endl;
    array <int,5> data_array2;
    for(int i=0; i<data_array2.size(); i++) cin>>data_array2[i];
    data_array.swap(data_array2);
    for(int i=0; i<data_array.size(); i++) cout<<data_array.at(i)<<" "; cout<<endl;
    for(int i=0; i<data_array2.size(); i++) cout<<data_array2[i]<<" "; cout<<endl;
}