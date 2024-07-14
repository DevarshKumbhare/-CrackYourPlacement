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
 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>result;
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
          if(mp[nums[i]]!=0) result.push_back(nums[i]);
          else mp[nums[i]]++;
        }
        return result;
    }
};