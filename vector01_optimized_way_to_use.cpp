//Vector is a template class in STL of C++, however, that a vector might consume more memory than an array
//Topic: size and Capacity in vector
/*
The size of a vector is the number of elements that it contains, which is directly controlled by how many elements you put into the vector.
Capacity is the amount of space that the vector is currently using.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    for(int i=0; i<10; i++)
    {
        v.push_back(i);
        cout<< "size: "<<v.size()<< "capacity: " <<v.capacity() <<endl;
    }
/*
size: 1capacity: 1                                                                                         
size: 2capacity: 2                                                                                         
size: 3capacity: 4                                                                                         
size: 4capacity: 4                                                                                         
size: 5capacity: 8                                                                                         
size: 6capacity: 8                                                                                         
size: 7capacity: 8                                                                                         
size: 8capacity: 8                                                                                         
size: 9capacity: 16                                                                                        
size: 10capacity: 16 
*/

    //If I know how many tentitive no I'll going to add then better to declare size, it will save time
    vector<int>v1;
    v1.reserve(9); //better when we push_back a lot of numbers. 
     for(int i=0; i<10; i++)
    {
        v1.push_back(i);
        cout<< "size: "<<v1.size()<< "capacity: " <<v1.capacity() <<endl;
    }
    //after reaching 1000 elements it will be going to double
}

/*
size: 1capacity: 9                                                                                         
size: 2capacity: 9                                                                                         
size: 3capacity: 9                                                                                         
size: 4capacity: 9                                                                                         
size: 5capacity: 9                                                                                         
size: 6capacity: 9                                                                                         
size: 7capacity: 9                                                                                         
size: 8capacity: 9                                                                                         
size: 9capacity: 9                                                                                         
size: 10capacity: 18  
*/