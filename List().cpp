/*
List is a double linked list
list is faster compared to other sequence container (vector,forward_list,deque) in terms of inisertion,removal and moving
*/

#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l1={1,3,2,5,4};
    l1.push_front(0);  //013254
    l1.push_back(6);   //0132546
    
    cout<<l1.front();  //0
    cout<<l1.back();  //6
    
    cout<<l1.size();  //7
     l1.pop_front();
     cout<<l1.size();  //6  Removes the first element of the list, and reduces size of the list by 1.
   
    l1.pop_back();
     cout<<"\n"<<l1.size()<<endl;  //5 Removes the last element of the list, and reduces size of the list by 1
    
    l1.sort();  //12345
    l1.reverse();  //54321
    
    auto it=l1.begin(); //list<int>::iterator it=l1.begin();
    l1.insert(it,6); //654321
    
    advance(it,2);
    l1.insert(it,9);  //6549321  //**Advances the iterator it by n element positions.**
    
    
    list<int>l2;
    l2.assign(3,2);  //222
    l2.insert(l2.begin(), l1.begin(), l1.end());  //6549321222
    l2.insert(l2.begin(),5,10); //10101010106549321222
    
    list<int>l3={7,8,99};
     it=l3.begin();
    it++;
    l3.splice(it,l1); //76549321899 /* transfer all elements of list1 at position 2 in list3 */
    
    list<int>l4={3,5,7};
    list<int>l5={2,6,9};  /*/* both the lists are sorted. In case they are not , 
    first they should be sorted by sort function() */
    
    l4.merge(l5);
    for(auto i:l4)
        cout<<i;
    return 0;
}
