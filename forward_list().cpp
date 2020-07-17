//Topic: forward list in STL
//forward list is a single LL, Introduced from C++11
//It differs from list by the fact that forward list keeps track of location of only next element while list keeps track to both next and previous elements,
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>list1={5,4,6,2};
    forward_list<int>list2;
    
    //assigning value using assign
    list2.assign({7,6,1,9});
    
    // insert_after() This function gives us a choice to insert elements at any position in forward list. 
    list1.insert_after(list1.begin(),8);  //58462 //// starts insertion from second position
    list1.insert_after(list1.begin(),{7,8,9}); //57898462
    list1.push_front(1); //157898462 // push_front() :- This function is used to insert the element at the first position on forward list. 
    list1.emplace_front(0); //0157898462 //. emplace_front() :- This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list
    list1.pop_front();//15789...//pop_front() :- This function is used to delete the first element of list.
    
    auto ptr=list2.begin();
    list2.emplace_after(++ptr,8); //76819
    list2.erase_after(++ptr); //7689
    list2.remove(7); //689 remove() :- This function removes the particular element from the forward list mentioned in its argument.
    list2.remove_if( [] (int x) { return x>6; }); //6 remove_if() :- This function removes according to the condition in its argument.
    list2.splice_after(list2.begin(),list1); //6157898562 splice_after() :- This function transfers elements from one forward list to other.
    list2.reverse(); //2648987516
    list2.sort(); //1245667889
    
    forward_list<int>list3={1,5,2};
    forward_list<int>list4={3,4,2};
    //list3.merge(list4); //134252 ??? what?
    
    //***Before merging two lists we must ensure the lists are in sorted order.*** 
    list3.sort();
    list4.sort();
    list3.merge(list4); //122345
    
    forward_list<int>list5={3,4,2,2,5,1,3};
    list5.unique(); //342513 <<remove the all **ADJACENT** duplicate elements from forward list.>>
    list5.resize(9);//342513000
    list5.resize(2);//34
    // If the given size is greater than the current size then new elements are inserted at the end of the forward_list. If the given size is smaller than current size then extra elements are destroyed.
    for(auto i:list5)
        cout<<i;
}