//unordered_map
//map: sorted in the basis of key
//unordered_map:build using hashing and data are stored in bucket.

#include<iostream>
#include<unordered_map>
#include <bits/stdc++.h> //stringstream ss
using namespace std;

void print_freq(string &input)
{
    unordered_map<string,int>wordFreq;
    
    // breaking input into word using string stream 
    stringstream ss(input);  // Used for breaking words 
    string word; // To store individual words 
    while (ss >> word) 
        wordFreq[word]++;
        
     for (auto x : wordFreq) 
        cout << x.first << " " << x.second << endl; 
}

int main()
{
    unordered_map<int,string>umap={ {1,"a"},{2,"b"} };
    //access
    cout<<umap[1]; //a
    cout<<umap[2]; //b
    
    umap.insert(make_pair(3,"cat"));
    //update
    umap[2]="bashar";
    for(auto i:umap)
        cout<<i.first<<" "<<i.second;
        
    auto search=umap.find(2);
    if(search != umap.end() )
        cout<<"found";
    else
        cout<<"not found";
        
         unordered_map<string, int> ump; 
  
    // inserting values by using [] operator 
    ump["GeeksforGeeks"] = 10; 
    ump["Practice"] = 20; 
    ump["Contribute"] = 30; 
  
    // Traversing an unordered map 
    for (auto x : ump) 
        cout << x.first << " " << x.second << endl; 
        
    // C++ program to find freq of every word using 
    string input="My name is Golam myself Golam" ;
    print_freq(input);
}