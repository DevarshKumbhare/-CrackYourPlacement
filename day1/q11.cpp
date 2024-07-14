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
    int maxArea(vector<int>& height) {
        int p=height.size();
        int Area=0;
        int l=0;//two pointer
        int r=p-1;
        while(l<r)
        {
          Area=max(Area, min(height[l], height[r])*(r-l));
          if(height[l]<height[r]) l++;
          else r--;
        }
        return Area;
    }
};