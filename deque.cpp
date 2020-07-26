//deque:Double ended queue, its not queue, if you want to compare,compare with vector 
//Like vector it is also sequence index container, in vector we onky have push_back() / pop_back, no push_front() / pop front()

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>dq={2,3,4};
    dq.push_front(1);  //1234
    dq.push_back(5);  //12345
    dq.pop_back();   //1234
    dq.pop_front(); //234
    cout<<dq.back()<<endl; //4 This function is used to reference the last element of the deque container.
    
    deque<int> second (4,100); //100 100 100 100 // four ints with value 100
    deque<int> third (second.begin(),second.end()); //100 100 100 100 // iterating through second
    deque<int> fourth (third); //100 100 100 100  
    
    int a[]={1,2,3,4,5,6,7};
    deque<int> dqu(a, a+7);  /* creates s deque with elements 1,2,3,4,5,6,7  */
    auto i=dqu.begin()+2;   ///* i points to 3rd element in dq */
    dqu.insert(i,69);   //1,2,69,3,4,5,6,7
    
    for(auto i:dqu)
        cout<<i;
}

/*
clear():It is used to remove all the items from the deque.
erase():It is used to remove items from a specified position.
front():It is used to reference the first element of the deque.
back():It is used to reference the last element of the deque.
at():This is used to reference the element present at the position given as the parameter to that given function.
swap():It is used to swap the contents of one deque with another deque of the same type and size.
begin():It returns the iterator to the first element of the deque.
end():It returns an iterator to the last element of the deque.
emplace_front():It is used to insert a new element at the beginning of the queue.
emplace_back():It is used to insert a new element at the back of the container.
There are more methods defined for deque.
*/