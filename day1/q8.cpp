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
    int maxProfit(vector<int>& prices) {
      int profit=0;
        for(int i=1; i<prices.size(); i++)
        {
          if(prices[i]>prices[i-1]) profit+=prices[i]-prices[i-1];
        }
        return profit;
    }
};