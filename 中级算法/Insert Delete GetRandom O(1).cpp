//
//  Insert Delete GetRandom O(1).cpp
//  Leetcode
//
//  Created by jarvis on 2018/8/25.
//

#include <stdio.h>

//保存一个哈希表和数组，数组保存val（用于随机返回），哈希表建立val和val在数组中下标的映射（用于常数级别的查找）
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        srand(time(NULL));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (find(val)) return false;
        data.push_back(val);
        m[val] = data.size() - 1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if ( !find(val) ) return false;
        
        int index = m[val];
        int valBack = data.back();
        
        data[index] = valBack;
        m[valBack] = index;
        
        m.erase(val);
        data.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return data[ rand() % data.size() ];
    }
    
private:
    unordered_map<int, int> m;
    vector<int> data;
    bool find(int val) {
        return (m.find(val) != m.end());
    }
    
};
