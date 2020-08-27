//Topic: Algorithm in STL
//STL is composed of Iterator + Vector + Algorithm
//Internally it uses Introsort which is combination of Quicksort, HeapSort and InsertionSort
//Bydefault it select Quicksort but moves to HeapSort if it is doing unfair partioing and taking more than N*logN time
// when array size is really too small it moves to InsertionSort

#include<iostream>
#include<vector>
#include<algorithm>
//#include<execution>
using namespace std;
bool ignore_case(char a, char b) {
                        return (tolower(a) == tolower(b));
                                 }
int main()
{
    vector<int>v{5,4,2,1,3,4};
    sort(v.begin(),v.end());  // 1 2 3 4 4 5
    cout<<"\n"<<is_sorted(v.begin(),v.end());  // 1 means True bydefault is_sorted means increasing order
    sort(v.begin(),v.end(),greater<int>());  // 5 4 4 3 2 1
    
    vector<int>::iterator it=find(v.begin(), v.end(), 3);  //Found
    if(it==v.end())
        cout<<"Not found";
    else    
        cout<<"Found";
    
    int t=count(v.begin(),v.end(),4);
    cout<<t;  // 2
    
    
    //multi threaded sorting is available in STL algorithm
    //sort using lambda expression
    vector<int>v1{2,1,3,5,6,4,7,9,8};
    sort( v1.begin(), v1.end(), [] (int a, int b) {return a>b;} ); // 9 8 7 6 5 4 3 2 1
    
    for(auto i:v1)
        cout<<i;
    cout<<endl;    
    cout<<is_sorted(v1.begin(),v1.end())<<endl;  // 0 means no/false
    cout<<is_sorted(v1.begin(),v1.end(), greater<int>()); //1
    
    //partial sort: sort() is used for sorting the elements present within a container. One of the variants of this is partial_sort, which is used for 
    //sorting not the entire range, but only a sub-part of it.
    //It rearranges the elements in the range [first, last), in such a way that the elements before middle are sorted in ascending order, 
    //whereas the elements after middle are left without any specific order.    
    
    
    vector<int>vec={3,1,2,5,6,4,8,8,9};
    partial_sort(vec.begin(),vec.begin()+3,vec.end()); // 123564889
    
    //Finding the smallest element: Similar to finding the largest element, we can also find the smallest element in the container in the previous example.
    partial_sort(vec.begin(), vec.begin()+1, vec.end(), greater<int>());
    vector<int>::iterator ip;
    ip=vec.begin();
    cout<<"\nLargest element:"<<*ip;   //9
    
    //nth_element
    //Median
     vector<int>ve={3,1,2,5,6,4,8,8,9};
    nth_element(ve.begin(), ve.begin()+ve.size()/2 ,ve.end());
       cout << "\nThe median of the array is " << ve[ve.size() / 2]; 
    //2nd largest
    
    nth_element(ve.begin(), ve.begin()+1, ve.end());
       cout << "\nSecond Largest: " << ve[1]; 
       
       
    vector<char> v5 = {'A', 'b', 'C', 'd', 'E'};

   auto i = is_sorted_until(v5.begin(), v5.end());

   cout << "First unsorted element = " << *i << endl;

   i = is_sorted_until(v5.begin(), v5.end(), ignore_case);

   if (i == end(v5))
      cout << "Entire vector is sorted." << endl;

    
}