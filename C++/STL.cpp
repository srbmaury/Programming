STL (Standard Template Library) is a powerful set of C++ template classes 
Three components of STL 
Containers
Algorithms              act on containers, library contains built in functions perform complex algorithms in ds
Iterators 

template<class X>
class list{
    X a[10];
};
list <float> l1;
// Vector can be used for creating dynamic arrays of char, integer, float and other types
Common Containers
vector        :     replicates arrays
queue         :     replicates queues
stack         :     replicates stack
priority_queue:     replicates heaps
list          :     replicates linked list
set           :     replicates trees
map           :     replicates arrays


Sequence Containes              :  array, linked list 
Associative Containers          :  Soted Data Structures like map, set
Unordered Associative Containers:  Unordered Data Structures
Containers Adapters             :  Interfaces to sequence containers
