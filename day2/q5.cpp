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
    int majorityElement(vector<int>& nums) {
        int c=-1, v=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
          if(v==0){
            c=nums[i];
            v=1;
          }
          else
          {
            if(c==nums[i])v++;
            else v--;
          }
        }
        int final_count=0;
        for(int i=0; i<n; i++)
        {
          if(c==nums[i])final_count++;
        }
        if(final_count>n/2)return c;
        return 0;
    }
};