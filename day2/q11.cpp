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
    bool isValid(string s) {
        stack<char>st;
        int p=s.length();
        for(int i=0; i<p; i++)
        {
          char c=s[i];
          if(c=='(' || c=='[' || c=='{') st.push(c);
          else
          {
            if(st.empty()) return false;
            if((c==')' && st.top()!='(') || (c==']' && st.top()!='[') || (c=='}' && st.top()!='{'))
            return false;
            else st.pop();
          }
        }
        if(!st.empty()) return false;
        return true;
    }
};