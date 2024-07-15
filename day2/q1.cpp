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
    vector<int>ans;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      ans.clear();
      spiral(matrix, 0, 0);
      return ans;
    }
    void print(vector<int>& x)
    {
      for(auto it: x)
      {
        cout<<it<<" ";
      }
      cout<<endl;
    }
    void spiral(vector<vector<int>>& matrix, int i, int j)
    {
      // cout<<i<<endl;
      int m=matrix.size();
      int n=matrix[0].size();
      if(i>m-1-i or j>n-j-1)return ;
      for(int p=j; p<n-j; p++)
      {
        ans.push_back(matrix[i][p]);
      }
        print(ans);
      for(int p=i+1; p<=m-i-1; p++)//1 to 2
      {
        ans.push_back(matrix[p][n-j-1]);
      }
        print(ans);
      for(int p=n-2-j; p>j; p--)
      {
        if(m-1-i<=i)break;
        ans.push_back(matrix[m-1-i][p]);//[1][2]
      }
        print(ans);
      for(int p=m-i-1; p>i; p--)
      {
        if(n-1-j<=j)break;
        ans.push_back(matrix[p][j]);
      }
      spiral(matrix, i+1, j+1);
    }
};