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
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size();
        vector<int>v;
        int first;
        for(int i=l-1; i>=0; i--)
        {
            first=i;
            for(int j=i-1; j>=0; j--)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(first);
                    v.push_back(j);
                    break;
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};