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
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n,0);
        pre[0]=nums[0];
        for(int i=1; i<n; i++)
        {
          pre[i]=pre[i-1]+nums[i];
        }
        int cnt=0;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
          if(pre[i]==k)cnt++;
          cnt+=mp[pre[i]-k];
          mp[pre[i]]++;
        }
        return cnt;
    }
};