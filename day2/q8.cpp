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
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> pq;
        int ret = INT_MIN;
        for(auto point:points)
        {
            while(pq.size() && point[0]-pq.top().second>k)
                pq.pop();
            if(!pq.empty())
                ret = max(ret, point[0] + point[1] + pq.top().first);
            pq.push(make_pair(point[1]-point[0], point[0]));
        }
        return ret;
    }
};