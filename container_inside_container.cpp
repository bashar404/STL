#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>Tree;
    
    int edges,s,d;
    cout<<"Enter the number of edges:"<<endl;
    cin>>edges;
    Tree.resize(edges);  //resize(): This lets you change the size of the vector to any size you want.
    // If n is smaller than current size then extra elements FROM END are destroyed.
//If n is greater than current container size then new elements are inserted at the end of vector.
/*Input:
    vector<int> vector1{ 1, 2, 3, 4, 5 };

Function call:
    cout << vector1.resize(10);

Output:
    //if we print elements
    1 2 3 4 5 0 0 0 0 0   //O as ending elements
*/    
    //reserve(): This changes the capacity of the vector. 
    for(auto i=0; i<edges; i++)
    {
        cout<<"source and destination: ";
        cin>>s>>d;
        Tree[s].push_back(d);
    }
    
    for(auto i:Tree)
    {
        for(auto j:i)
            cout<<j;
    cout<<endl;
    }
}