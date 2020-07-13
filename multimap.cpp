//Syntax: Multimap<T1,T2>obj
//In map, there is only one key thus one value is associated with that key & key should be unique
//No .at() & [] function because of no single key. Thus dont know what should return

#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<char,int>mulmap;
    mulmap.insert(make_pair('a', 1)); //multiple similar key
    mulmap.insert(make_pair('a', 2)); //multiple similar key
    mulmap.insert(make_pair('a', 3)); //multiple similar key
    mulmap.insert(make_pair('b', 3));
    mulmap.insert({'a',4});
    mulmap.insert(pair<char,int>('a', 4));
    
    //contains() has to return a bool(True/FALSE). Checks if there is an element with key equivalent to key in the container.
//Using C++ 20 compiler I get the following output for the code:
    // cout<<mulmap.contains('c')<<endl;  //Output:0 as it doesn't exist
    // cout<<mulmap.contains('b')<<endl;  //Output:1 as it exist
    cout<<mulmap.count('a')<<endl; //5 as a appears 5 times here

    auto lb=mulmap.lower_bound('a');
    cout<< lb->first <<" "<<lb->second<<endl; // a 1
    
     auto ub=mulmap.upper_bound('a');
    cout<< ub->first <<" "<<ub->second<<endl; // b 3
    
    auto ub_b=mulmap.upper_bound('b');
    cout<< ub_b->first <<" "<<ub_b->second<<endl; // 0

    //upper_bound(k) is a built-in function in C++ STL which returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to key+1 and element=0.
    
    for(auto i:mulmap)  //Iterate over multimap
        cout<<i.first<<" "<<i.second<<endl; //no () after first
/*
a 1                                                               
a 2                                                               
a 3                                                               
a 4                                                               
b 1  //It stores sorted list of key-value pair
*/

//Get all the pairs of a given key
    auto range=mulmap.equal_range('a');
    for(auto it=range.first; it!=range.second; it++)
        cout<< it->first << " "<< it->second<<endl;
//equal_range is used to find the sub-range within a given range [first, last) that has all the elements equivalent to a given value. It returns the initial and the final bound of such a sub-range.
//This function requires the range to be either sorted or partitioned
/* a 1                                                               
a 2                                                               
a 3                                                               
a 4                                                               
a 4  */


//"C++ 20:"
multimap<int,char>golam{{1,'a'},{2,'b'},{3,'c'}};
multimap<int,char>anny{{7,'a'},{8,'b'},{9,'c'}};
multimap<int,char>nabila{{1,'a'},{2,'b'},{3,'c'}};

cout<<(golam==anny)<<endl;    //0
cout<<(golam==nabila)<<endl;  //1
cout<<(golam>anny)<<endl;    //0
cout<<(golam<anny)<<endl;    //1
cout<<(golam>nabila)<<endl;  //0
cout<<(golam>=nabila)<<endl;  //1

//C++ 17
 multimap<int, string> ma {{1, "apple"}, {5, "pear"}, {10, "banana"}};
 multimap<int, string> mb {{2, "zorro"}, {4, "batman"}, {5, "X"}, {8, "alpaca"}};
 multimap<int, string> u;
  u.merge(ma);
  cout << "ma.size(): " << ma.size() << '\n'; //0
  u.merge(mb);
  cout << "mb.size(): " << mb.size() << '\n'; //0
 
  for(auto k: u)
    cout << k.first << ", " << k.second << '\n';
    /* 1, apple
2, zorro
4, batman
5, pear
5, X
8, alpaca
10, banana  */


}