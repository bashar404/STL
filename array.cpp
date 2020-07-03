//c++ 11
//std::array
//array is a container in c++
//container to store data
#include<array>
#include<iostream>
using namespace std;
int main()
{
    array<int,5>arr={1,2,3,4,5}; //must need to define type and size at compile time
    cout<<arr[0];
    cout<<arr.at(1);
    cout<<arr.front();
    cout<<arr.back();
    
    array<int,5>arr1; //can also be done like this which isnt possible in traditional c++
    arr1={5,4,3,2,1};
    arr1.fill(7);
    for(auto i=0; i<arr1.size(); i++)
        cout<<arr1[i];
}
