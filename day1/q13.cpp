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
 
// Time Complexity = O(n^3)
// Space Complexity = O(n)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<vector<int> > res;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++) {
                if (j > (i + 1) && nums[j] == nums[j - 1])
                    continue;
                int l = j + 1, r = n - 1;
                while (l < r) {
                    long sm = (long)nums[i] + (long)nums[j] + (long)nums[l] + (long)nums[r];
                    if (sm == target) {
                        res.push_back(vector<int>{nums[i], nums[j], nums[l], nums[r]});
                        l += 1;
                        while (l < r && nums[l] == nums[l - 1])
                            l += 1;
                    }
                    else if (sm > target)
                        r -= 1;
                    else
                        l += 1;
                }
            }
        }
        return res;
    }
};