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

    string intToRoman(int num) {
        map<int,string> mpp = {{1, "I"} , {4 , "IV"} , {5 ,"V"} , {9 , "IX"} , {10 , "X"} ,
        {40 , "XL"} , {50 ,"L"} ,{90 , "XC"} , {100 , "C"} , {400 , "CD"} ,{500 , "D"} , 
        {900 , "CM"} , {1000 , "M"} } ;

        string roman = "";

        for(auto it = mpp.rbegin() ; it != mpp.rend() || num > 0 ; it++){
            if(num >= it->first){
                int freq = num / it->first ;
                while(freq--){
                    roman = roman + it->second ;
                }

                num = num % it->first ;
            }
        }

        return roman ;
    }
};