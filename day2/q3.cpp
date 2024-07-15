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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=m; i<m+n; i++)
        {
          nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(), nums1.end());
    }
};