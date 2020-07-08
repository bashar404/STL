//Vector is a template class in STL of C++, however, that a vector might consume more memory than an array
//Topic: std::vector
/*why it is called vector?
->vector is a sequence container also known as a dynamic array or array list
-->sequence container menas whatever we give it store sequentially not randomly
-->Best part of array: we can directly fast access like a[5]
-->Best part of LL: when we don't know the size
-->Syntex: vector<Type>v; 
-->when there is no capacity to hold a new value, vector will make the double size
of already created array & copy all the elements into newly creatred array
*/
#include <iostream>
#include <vector>
#include<algorithm>  //to perform sort
using namespace std;

int main()
{
    //different declaration type
    vector<int>v;  
    vector<int>v2(5,30); //size is 5 and fill up with 30
    vector<int>v3={10,20,30};
    
    //From C++11 and onwards
    for(auto itr:v2)
        cout<<"\t"<<itr; //30 30 30 30 30
     
     //(pre c++11)   
    for(auto itr=v3.begin(); itr !=v3.end(); itr++)
        cout<<"\t"<<*itr;  //10 20 30
        
    //access elements
    cout<<"\n"<<v2[2]<<endl; //30
    cout<<v2[20]<<endl;   //giving 0 < GARBAGE VALUE >
    
    cout<<"\n"<<v2.at(2)<<endl;
    //cout<<v2.at(20)<<endl;   //program will be aborted

    cout<<"\n"<<v3.front()<<endl;  //30
    cout<<"\n"<<v3.back()<<endl;   //10
    
    
    cout<<v2.size()<<endl;      //5
    cout<<v2.capacity()<<endl; //5
    
    v2.push_back(40);
    
    for(auto i:v2)
        cout<<"\t"<<i; 
        
    cout<<v2.size()<<endl;      //5
    cout<<v2.capacity()<<endl; //10 (double the size)
    
    if(v.empty()) //empty() – Returns whether the container is empty.
        cout<<"yes v is empty";
    else
        cout<<"no";
        
    int *position=v2.data();   //data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    cout<<*position;  //30
    
    v3.assign(3,99);  //assign() – It assigns new value to the vector elements by replacing old ones
    for(auto i:v3)
        cout<<i;     // 99  99  99
        
    v3.pop_back();    //no parameter
    for(auto i:v3)
        cout<<"\n"<<i; //99 99
        
    v3.insert(v3.begin(),90);  //90 99 99
    v3.clear();
    for(auto i:v3)
        cout<<"\n"<<i; 
        
    vector<int>v4={30,10,20,60,40};
    sort(v4.begin(),v4.end()); //use #include<algorithm> to sort to order the vector elements in an ascending order.
                                //10,20,30,40,60
    sort(v4.begin(),v4.end(),greater<int>());    //descending order, using the greater<int>() as the third argument.
           
                                                //60,40,30,20,10
    //swap()
    vector<int>v5,v6;
    v5.push_back(5);
    v6.push_back(20);
    v5.swap(v6);
    for(auto i:v6)
        cout<<"\t"<<i; //5
    return 0;
}