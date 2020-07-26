//Queue in Standard Template Library (STL)
/************Elements are inserted at the back (end) and are deleted from the front**************/

#include<iostream>
#include<queue>
using namespace std;
void display(queue <int> q)
    {
        while(!q.empty())
        {
            cout<<q.front();
            q.pop();
        }
    }
int main()
{
    queue <int> a;
    a.push(10);  //push() is used to push or insert a new element at the end or at the back of the queue
    a.push(20);
    a.push(30);
    display(a);     //10 20 30
    /*you cant iterator in queue like other container
    for(auto i:a)
        cout<<a;
        */
        
    cout << "a.empty() :" << a.empty() << "\n";  //0
    cout << "a.size() : " << a.size() << "\n";   //3
    cout << "a.front() : " << a.front() << "\n"; //10
    cout << "a.back() : " << a.back() << "\n";  //30
    
    a.pop(); //20 30    display(a);
    a.push(40); //20 30 40
    
    //swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.
   queue<char>q1,q2;
   int v=97;
   for(int i=0; i<5;i++)
   {
       q1.push(v);  //abcde
       v++;
   }
   //display(q1); int type but it char type
   while(!q1.empty())
    {
      cout<<q1.front();
      q1.pop();  //pop() is used to push or delete an existing element from the beginning or start of the queue container. pop() accepts no parameter, and deletes the element from the beginning of the queue associated with the function and reduces the size of the queue container by 1.
    }
    
     
   for(int i=0; i<3;i++)
   {
       q2.push(v);  //fgh
       v++;
   }
   
   q1.swap(q2);
   //display(q1); int type but it char type
   while(!q2.empty())
   {
      cout<<q2.front(); //abcde
      q2.pop();
   }
}     