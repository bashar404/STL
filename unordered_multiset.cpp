//unordered multi set
//set->unique & sorted, unordered_set->unique, unordered_multiset-> none
//search, insrtion and removal have avg time complexity due to hashing
//It use hashing to insert elements into buckets
#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_multiset<int>umset={3,2,1,3,4,5,6,5,4,6,7,8,9};
    auto search=umset.find(2);
    if(search!=umset.end())
        cout<<"found "<<*search;
        
    for(auto i:umset)
        cout<<i;  //9876655441233
    cout<<"\n"<<umset.count(6);  //2
    
    //  empty initialization 
    unordered_multiset<int> ums1; 
    //  Initialization by assignment 
    ums1 = {2, 7, 2, 5, 0, 3, 7, 5}; 
  //  empty() function return true if set is empty 
    // otherwise false 
    if (ums1.empty()) 
        cout << "unordered multiset 1 is empty\n"; 
    else
        cout << "unordered multiset 1 is not empty\n";
    ums1.insert(7); 
}

/*. Unordered_multiset
(i) Elements can be stored in any order.
(ii) Duplicate elements can be stored.
(iii) Hash-table used to store elements.
(iv) We can erase only the element for which iterator position is given.*/


