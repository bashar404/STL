/*copy() function is a library function of algorithm header, it is used to copy the elements of a container, it copies the 
elements of a container from given range to another container from a given beginning position*/
#include<iostream>
#include<list>
#include<numeric>  // header for iota
#include<vector>
#include<algorithm>  //copy
using namespace std;

int main()
{
    list <int> l(10);
    iota(l.begin(), l.end(), -5); //-5 -4 -3 -2 -1 0 1 2 3 4 
    //"eye-oh-tuh" It is standard in C++11, but not in earlier standards.
    //This method assigns all the successive elements in range [first, last] as an incremented value of the element itself
    int n[10];
    iota(n,n+10,10); //10 11 12 13 14 15 16 17 18 19

    vector<int>v;
    for(auto i=0; i<10; i++)
        v.push_back(i);      //0 1 2 3 4 5 6 7 8 19
    
    cout<<"\n";
    auto result=accumulate(begin(v), end(v), 0 );
    cout<<result<<endl;               //45
    
    vector<int>from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);
    
    vector<int>to_vector(from_vector.size());
    copy(from_vector.begin(), from_vector.end(), to_vector.begin());
    for(auto i:to_vector)
        cout<<i;       // 0 1 2 3 4 5 6 7 8 9
    /* copy(strt_iter1, end_iter1, strt_iter2) : The generic copy function used to copy range of elements from one container to other. It takes 3 arguments:
        strt_iter1 : The pointer to the beginning of source container, from where elements have to be started copying.
        end_iter1 : The pointer to the end of source container, till where elements have to be copied.
        strt_iter2 : The pointer to the beginning of destination container, to where elements have to be started copying.*/
    cout<<endl;
    vector<int>to_vector2;  //don't need to initialize the size as we us back_inserter
    copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector2)); // inserts new elements at the end of the container to which it is applied.
    for(auto i:to_vector2)
        cout<<i;       // 0 1 2 3 4 5 6 7 8 9
    cout<<endl;
    
    //WHAT IS THE BENIFITS OF COPY() IF WE CAN DO THIS?
    vector<int>to_vector3=from_vector;
    for(auto i:to_vector3)
        cout<<i;       // 0 1 2 3 4 5
    cout<<endl;
    
    vector<int>v1={1,5,3,7,4,6};
    vector<int>v2(5),v3(5);
    copy(v1.begin()+1, v1.begin()+3, v2.begin());
    for(auto i:v2)
        cout<<i;  //  5 3 0 0 0 0
        
    //copy_n    
    copy_n(v1.begin(), 4, v3.begin());
    for(auto i:v3)
        cout<<"\n"<<i;  // 1 5 3 7 0
        
    cout<<"Odd numbers in from_vector:";
    vector<int>v4(5);
    copy_if(from_vector.begin(), from_vector.end(), v4.begin(), [](int x) {return (x & 1);});
    for(auto i:v4)
        cout<<"\n"<<i;  // 1 5 3 7 9
        
    //copy_backward()    
    vector<int>v5(15);
    copy_backward(from_vector.begin(), from_vector.end(),v5.end());
    for(auto i:v5)
        cout<<i;  // 0 0 0 0 0 1 2 3 4 5 6 7 8 9
        
    
}