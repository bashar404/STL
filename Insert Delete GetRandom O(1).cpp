//O(1) Sol, uses map to track indexes and vector that has the elements.

class RandomizedSet {
    private:
    unordered_map<int,int>umap;
    vector<int>v;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) 
    {
        //return false if it exists
        if(umap.find(val)!=umap.end())
            return false;
        else
        {
            umap[val]=v.size(); //v.size()=0
            v.push_back(val);  // insert the number to the end of vector
        }
          return true;  
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) 
    {
        //return false if it doesn't exists
        if(umap.find(val)==umap.end())
            return false;
        else
        {
           // auto it=umap.find(val); //idea: find the value of index which is need to be removed
            //strategy: swap this value  with the last element of the vector
            //https://www.youtube.com/watch?v=WtkwD7ikxfg&ab_channel=TECHDOSE
            //insert the item at the last which will be removed
            // v[ it->second ] =v.back(); //it->second contains the index
            // v.pop_back();  // remove last element
            // umap[ v[ it->second ] ] =it->second;
            // umap.erase(val);  // remove entry from map
            // return true;
            
            int n=v.size();
            int last_val=v[n-1];
            swap(v[ umap[val] ],v[n-1]);
            v.pop_back();
            umap[last_val]=umap[val];
            umap.erase(val);
            return true;
            
        }
    }
    
    /** Get a random element from the set. */
    int getRandom()
    {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
