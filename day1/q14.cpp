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
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int n=cardPoints.size();
        for(int i=0; i<k; i++)
        {
          sum+=cardPoints[i];//sum of the k starting elements
        }

        int max_sum=sum;
        for(int i=0; i<k; i++)
        {
          sum=sum-cardPoints[k-1-i]+cardPoints[n-1-i];
          max_sum=max(max_sum, sum);
        }
        return max_sum;
    }
};