#include <bits/stdc++.h>//Codeforces Round 877 (Div. 2)
#include<algorithm>
#include<array>
#include<set>
#include<bitset>
#include<list>
#include<iterator>
#include<regex>
#define ll long long
#define ld long double
#define endl '\n'
#define ull unsigned long long
#define ui unsigned int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N=10000;
 
class RandomizedCollection {
public:
    vector<int> arr;
    unordered_map<int, unordered_set<int>> map;
    //keeping track of indexes
    RandomizedCollection() {}
    
    bool insert(int val) {
        arr.push_back(val);
        map[val].insert(arr.size()-1);
        return map[val].size() <= 1;
    }
    
    bool remove(int val) {
        if(map[val].size()==0) return false;
        int ind= *map[val].begin();
        map[val].erase(ind);
        
        int num= arr.back();
        swap(arr[ind], arr[arr.size()-1]);
        map[num].insert(ind);
        map[num].erase(arr.size()-1);
        arr.pop_back();
        return true;
    }
    
    int getRandom() {
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */