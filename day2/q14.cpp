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
 
class Solution
{
public:
    string simplifyPath(string path)
    {
        if (path.size() == 1)
        {
            return path;
        }
        string result;
        stack<string> stk;
        string temp;
        for (int i = 0; i < path.size(); i++)
        {
            temp.clear();

            while (path[i] == '/')
            {
                i++;
            }

            while (i < path.size() && path[i] != '/')
            {
                temp += path[i];
                i++;
            }

            if (temp == "..")
            {
                if (!stk.empty())
                {
                    stk.pop();
                }
            }
            else
            {
                if (temp != "." && temp != "")
                {
                    stk.push(temp);
                }
            }
        }
        stack<string> reverse;
        while (!stk.empty())
        {
            reverse.push(stk.top());
            stk.pop();
        }

        while (!reverse.empty())
        {
            result += "/" + reverse.top();
            reverse.pop();
        }

        return result.empty() ? "/" : result;
    }
};