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
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int prefix_sum=0;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            if(prefix_sum<0){
                prefix_sum+= ceil(abs(prefix_sum)*1.0/k)*k;
            }
            prefix_sum%=k;
            if(mp.find(prefix_sum)!=mp.end()){
                ans+=mp[prefix_sum];

            }
            mp[prefix_sum]++;
        }
        return ans;
    }
};