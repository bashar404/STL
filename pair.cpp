//Topic: pair in CPP
//Syntex: pair<T1,T2>obj; T1 & T2 can be different type
//The pair container is a simple container defined in <utility> header consisting of two data elements or objects.
#include<iostream>
#include<utility>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    pair<int,int>o(10,20);
    pair<int,int>p=make_pair(10,40);
    cout<<p.first<<" "<<p.second<<endl;  //10 40
//The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
//C++ 20 lexicographically compares the values in the pair

    cout<< (o==p) <<endl; //0 //return 1 if all are same operator== tests if both elements on lhs and rhs pair are equal. The return value is true if both lhs.first == rhs.first AND lhs.second == rhs.second, otherwise false
    cout<< (o>p) <<endl; //0
    cout<< (o<p) <<endl; //1
    //C++ 11
    o.swap(p);
    
    cout<<o.first<<" "<<o.second<<endl; //10 40
    

    vector< pair<string,int> >v;
    v.push_back( make_pair("Golam",32) );
    v.push_back( make_pair("Anny",29) );
    for(auto i:v)
        cout<<i.first<<" "<<i.second; //Golam 32 Anny 29
    sort(v.begin(),v.end()); //#include<algorithm>
    for(auto i:v)
        cout<<i.first<<" "<<i.second; //Anny 29 Golam 32
   
    // If not initialized, the first value of the pair gets automatically initialized.
    pair <int, double> PAIR1 ; //pair <string, char> PAIR2 ; 
  
    cout << PAIR1.first ;  //it is initialised to 0 
    cout << PAIR1.second ; //it is initialised to 0 
    
    set<pair<string,int>>s={
       {"A",3},{"A",2},{"B",3},{"A",0} 
    };
    for(auto i:s)
        cout<<i.first<<" "<<i.second<<endl; // A 0 A 2 A 3 B 3
    
   //We can also create a pair and assign the elements later
    pair<int,int> p1;
    p1.first = 3;
    p1.second = 4;
    cout << p1.first << " " << p1.second << endl; // 34
    
    //We can also create a pair using a constructor
    pair<int,int> p2 = pair<int,int>(5, 6);
    cout << p2.first << " " << p2.second << endl; // 5 6

   
    return 0;
}