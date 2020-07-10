/* Topic: set
header: #include<set>
set is a associative container. 4 associative container in c++ :set,multiset,map,multimap
*/

#include<set>
#include<iostream>
#include<functional>  //std::greater<int>
using namespace std;
int main()
{
    set<int>s={3,1,2,3,2,3,4};

    //it doesn't allow duplicate values
    for(int i:s)
        cout<<i;  //1234 (****SORTED ORDER****)
        
    set<int,std::greater<int>>s2;
    s2={1,3,2,4,5};
    
    for(int i:s2)
        cout<<i;  //54321 (****Descending ORDER****)
        
    //insert data in random ORDER
    s2.insert(6);
    s2.insert(7);
    s2.insert(6);  //discard as duplicate value
    cout<<endl;
    
    //assigning the data feom s1 to s2
    set <int>s3(s.begin(),s.end());    //1234
    for(int i:s3)
        cout<<i;  
    
    //remove all elemnts less than 3
    s3.erase(s3.begin(),s3.find(3));  //34
    
    //remove elemnts with value 4
    s3.erase(4);  //3
    cout<<endl;
    
    s3.swap(s); //s contains only 3
    s.clear();
        
}