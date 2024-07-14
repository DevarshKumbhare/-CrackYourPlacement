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
using namespace std;
const int N=10000;
 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fastp = nums[nums[0]];
        
        while (slow != fastp) {
            slow = nums[slow];
            fastp = nums[nums[fastp]];
        }
        
        slow = 0;
        while (slow != fastp) {
            slow = nums[slow];
            fastp = nums[fastp];
        }
        return slow;
    }
};