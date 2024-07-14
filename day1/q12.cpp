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
    vector<vector<int>> threeSum(vector<int>& nums) {
      int p=nums.size();
      vector<vector<int>>ans;
      sort(nums.begin(), nums.end());
      for(int i=0; i<p; i++)
      {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int l=i+1;
        int r=p-1;
        while(l<r)
        {
          int threeSum=nums[i]+nums[l]+nums[r];
          if(threeSum>0) r--;
          else if(threeSum<0) l++;
          else
          {
            cout<<"*";
            vector<int>temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[l]);
            temp.push_back(nums[r]);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);

            l++;
            while(nums[l]==nums[l-1] && l<r)
            {
              l++;
            }
          }
        }
      }
      return ans;
      /*
        map<int, int>p;
        int l=nums.size();
        for(int i=0; i<l; i++)
        {
          p[nums[i]]++;
        }
        map<pair<int,int>, int>m;
        map<vector<int>, int>ans;
        vector<vector<int>>v;
        for(int i=0; i<l; i++)
        {
          for(int j=i+1; j<l; j++)
          {
            if(m[{nums[j],nums[i]}]==0 && m[{nums[i],nums[j]}]==0)
            {
            int check=nums[i]+nums[j];
            check*=-1;
            vector<int>r;
            r.push_back(nums[i]);
            r.push_back(nums[j]);
            r.push_back(check);
            sort(r.begin(),r.end());
            if(ans[r]==0 && p[check]>0)
            {
            map<int,int>temp;
            temp[check]++;
            temp[nums[i]]++;
            temp[nums[j]]++;
            if(temp[check]<=p[check] && temp[nums[i]]<=p[nums[i]] && temp[nums[j]]<=p[nums[j]])
            {
              v.push_back(r);
              ans[r]++;
              if(nums[i]<=nums[j]) m[{nums[i],nums[j]}]++;
              else m[{nums[j],nums[i]}]++;
            }
            }
            }
          }
        }
        return v;*/
    }
};