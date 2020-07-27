//stack is fifo
//stack does not have its internal structure it use deque's structure thats why stack is a container adapter
// stack allows to push(insert) and pop(remove) only from back means a new element is added at one end and (top) an element is removed from that end only.
/*
The functions associated with stack are:
empty() – Returns true, if the stack is empty, and false if otherwise. – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)
*/

#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    stack <int> stk;
    stk.push(3);
    stk.push(6);
    stk.push(9);
    display(stk);  //9 6 3
    cout<<"Size: "<<stk.size()<<endl; //3
    cout<<"Top element: "<<stk.top()<<endl; //9
    
     stack<int> mystack1; 
    stack<int> mystack2; 
      
       // pushing elements into first stack 
    mystack1.push(1); 
    mystack1.push(2); 
    mystack1.push(3); 
    mystack1.push(4); 
      
       // pushing elements into 2nd stack 
    mystack2.push(3); 
    mystack2.push(5); 
    mystack2.push(7); 
    mystack2.push(9); 
    
    mystack1.swap(mystack2);
    display(mystack1); //9 7 5 3
}