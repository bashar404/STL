/*
Map is a container, as name suggests used to store a key-value pair. Map has an advantage over other containers by the fact that searching in map,
defined by the “key” takes only O(1) time complexity,hence making it useful in various coding fields.
Syntax: map<key,value_type>obj
*/
#include<map>
#include<iostream>
#include<functional>
#include<vector>
using namespace std;
int main()
{
    map<string,int>M;
    M["Golam"]=2084098027;
    M["Anny"]=2085139371;
    
    //Anny 2085139371                                                                     
   //Golam 2084098027 
    
    M["Golam"]=208; //Values can be similar, but key must be unique
    M["Anny"]=208; //As both GOlam & Anny holds 208
    
    //Anny 2085139371                                                                     
   //Golam 208
    
    // initialize container
    map<int,int>M1;
    M1.insert({2,30});
    M1.insert({3,40});
    M1.insert({4,50});
    M1.insert({2,20});  // does not inserts key 2 with element 20 
    /* 2 30
       3 40
       4 50 */
   
    for(auto i:M1)
        cout<<i.first<< " " <<i.second<<endl; //**FIRST SECOND
        
    map<string,int,std::greater<string>>M2;  //greate<KEY>
    M2["Golam"]=1988;
    M2["Dastoger"]=12;
    M2["Bashar"]=01;
    
/*                                                                                                                            
Golam 1988                                                                                                                          
Dastoger 12                                                                                                                         
Bashar 1 */
M2.insert(make_pair("pAnny",1993));

/* pAnny 1993                                                                                                                     
Golam 1988                                                                                                                          
... */

cout<<M2["Golam"]<<endl;  //1988
M2.at("Golam")=1986;
cout<<M2["Golam"]<<endl;  //1986


//at and [ ]
//Both at and [ ] are used for accessing the elements in the map. The only difference between them is that at throws an exception
//if the accessed key is not present in the map, on the other hand operator [ ] inserts the key in the map if the key is not present already in the map.
M2["sabiha"]=07;  ///* since there is no key with value sabiha the map, 
                  //it insert a key-value pair in map with key=sabiha and value = 07 */

//M2.at("alam")=27; ///* since there is no key with value alam the map, it throws an exception


//Map with vector
map<string,vector<int>>mv;
mv["Golam"].push_back(1988);
mv["Golam"].push_back(12);
mv["Golam"].push_back(01);
for(auto i:mv)
    {
        cout<<i.first<<endl;  //Golam
        for(auto j:i.second)
            cout<<j<<" ";    //1988 12 1 
    }

}


/*
Anny 2085139371                                                                     
Golam 2084098027 


*/