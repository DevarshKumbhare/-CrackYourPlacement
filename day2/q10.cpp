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
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>>st;
        int l=heights.size();
        int Area=0;
        for(int i=0; i<heights.size(); i++)
        {
          int start=i;
          while(!st.empty() && (st.top()).second>heights[i])
          {
            pair<int,int>r=st.top();
            st.pop();
            Area=max(Area, r.second*(i-r.first));
            start=r.first;
          }
          st.push({start, heights[i]});
        }
        while(!st.empty())
        {
          pair<int,int>r=st.top();
          st.pop();
          Area=max(Area, r.second*(l-r.first));
        }
        return Area;
    }
};