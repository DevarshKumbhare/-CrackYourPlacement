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
    void sortColors(vector<int>& nums) {
        int blue=2;
        int white=1;
        int n=nums.size();
        int y=0;
        int l=0;
        for(int i=0; i<n; i++)
        {
          if(nums[i]==blue)y++;
          else
          {
            int temp=nums[l];
            nums[l]=nums[i];
            nums[i]=temp;
            l++;
          }
        }
        l=0;
        for(int i=0; i<n-y; i++)
        {
          if(nums[i]!=white)
          {
            int temp=nums[l];
            nums[l]=nums[i];
            nums[i]=temp;
            l++;
          }
        }
    }
};