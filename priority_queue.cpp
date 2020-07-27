//Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue and elements are in non increasing order
/*
priority_queue::size(): Returns the size of the queue.
priority_queue::empty(): Checks if the queue is empty and returns its status.
priority_queue:: top(): Returns a reference to the topmost element of the priority queue.
priority_queue::push(): Adds an item at the end of the priority queue.
priority_queue::pop(): Removes the first element from the priority queue.
priority_queue:: swap (): Used to swap the contents of one priority queue with another one of the same type and size.
*/
#include <iostream>
#include<queue>
using namespace std;

void display(priority_queue<int>pq)
{
    while(!pq.empty())
    {
       cout<<pq.top()<<" ";
       pq.pop(); 
    }
}


void print(priority_queue<int,vector<int>,std::greater<int>>p_q)
{
    while(!p_q.empty())
    {
       cout<<p_q.top()<<" ";
       p_q.pop(); 
    }
}
int main()
{
    //Bydefault max_heap
    priority_queue<int>pq;
    for(auto i: {3,4,6,7,5,2,1,9,8})
            pq.push(i);
    display(pq); // 987654321

    //build min_heap
    priority_queue<int,vector<int>,std::greater<int>>p_q;
    for(auto i: {3,4,6,7,5,2,1,9,8})
            p_q.push(i);
    print(p_q);  //123456789

    return 0;
}
