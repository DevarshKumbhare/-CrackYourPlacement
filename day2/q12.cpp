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
    int strStr(string haystack, string needle) {
      int n=haystack.length(),m=needle.length();
      if(m>n) return -1;
      for(int i=0; i<=n-m; i++)
      {
        for(int j=0; j<m; j++)
        {
          if(haystack[i+j]!=needle[j]) break;
          if(j==m-1) return i;
        }
      }

      return -1;
    }
};