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
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++)
        {
          if(m[nums[i]]!=1) m[nums[i]]++;
        }
        vector<int>v;
        int cnt=0;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
          if((*it).second==1)
          {
            cnt++;
            v.push_back((*it).first);
          }
        }
        nums=v;
        return cnt;
    }
};