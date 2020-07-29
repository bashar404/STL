//unordered set
//SET: is unique (no repetation), ordered data
//unordered ser it is unique but not ordered 

#include <iostream>
#include<unordered_set>
using namespace std;

void print_duplicates(int a[],int n)
{
    unordered_set<int>us;
    unordered_set<int>duplicate;
    
    for(auto i=0; i<n; i++)
    {
        if( us.find(a[i])==us.end() )
            us.insert(a[i]);  /// if element is not there then insert that 
        else
            duplicate.insert(a[i]);   // if element is already there then insert into duplicate set 
    }
    
    for(auto i:duplicate)
        cout<<i<<" ";
}
int main()
{
    unordered_set<string>uset;
    uset.insert("I");
    uset.insert("Love");
    uset.insert("C++");
    
    string key="Love";
    if(uset.find(key)==uset.end())
        cout<<"not found";
    else
        cout<<key<<" found";
        
        // Print duplicates in arr[0..n-1] using unordered_set 
    int a[]={2,1,3,1,4,5,1,5,6,8,2,7,9};  
    int n=sizeof(a)/sizeof(int);
    print_duplicates(a,n);  // 2 1 5 The unordered part of unordered_set means you can't use that container with any concern for ordering.

    return 0;
}
