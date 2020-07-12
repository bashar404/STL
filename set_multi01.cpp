// Multisets are containers very much similar to sets; the main difference in multisets is that it can have multiple elements with the same values, unlike in sets.
//Multisets containers store the item in a particular specific order.
#include<iostream>
#include<set>
#include<functional>
using namespace std;

int main()
{
    multiset<int>ms={4,3,2,4,2,4,3};  //2233444
    multiset<int>ms3={1,2,3,4,5};
    multiset<int,std::greater<int>>ms1={4,3,4,2,4,3};  //444332
    multiset<int>ms2(ms.begin(),ms.end());  //2233444  //
    // assigning elements of the mset to other multiset
   
    ms.insert(6);
    ms.insert(7);
    ms.insert(8);
    ms.insert(7);  //ms has 22334446778
    
    ms.erase(3);
    ms.erase(3); //now ms has 224446778
    
    cout<<"size of multiset is: "<<ms.size();  //9
    if(ms.empty())  //return 0
        cout<<"not empty";
    else
        cout<<"empty";
        
    //ms.swap(ms1);
    ms.swap(ms3); //Both need not be equal size BUT DECLARATION SHOUD SAME, EX: IF WE PASS M1 HERE, THEN ERROR
    
    cout<<endl;
    cout<<"lower bound of ms1:"<<   *ms1.lower_bound(2)<<endl;
    for(int i:ms)
        cout<<i;
}