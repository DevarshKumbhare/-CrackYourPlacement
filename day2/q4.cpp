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
    bool f(vector<int>& nums, int i, vector<int>&dp)
    {
      int n=nums.size();
      if(i>=n)return false;
      if(i==n-1)return true;
      if(dp[i]!=-1)return dp[i];
      bool ans = false;
      for(int x=1;x<=nums[i];x++)
      {
        if(i+x>=n)break;
        ans|=f(nums,i+x,dp);
      }
      return dp[i]=ans;
    }
    bool canJump(vector<int>& nums) {
      vector<int>dp(nums.size(),-1);
      return f(nums,0,dp);
    }
};