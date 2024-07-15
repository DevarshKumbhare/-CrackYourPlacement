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
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp = board;
        int m = board.size();
        int n = board[0].size();
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                int live = 0;
                if( i > 0){
                    if(temp[i-1][j] == 1)
                        live++; //top
                    if( j > 0)
                        if(temp[i-1][j-1] == 1) 
                            live++; //top left corner
                }

                if( i+1 < m){
                    if(temp[i+1][j] == 1)
                        live++; // bottom
                    if( j+1 < n)
                        if(temp[i+1][j+1] == 1)
                            live++; // bottom right corner
                }
                
                if( j > 0){
                    if(temp[i][j-1] == 1)
                        live++; // left
                    if( i+1 < m)
                        if(temp[i+1][j-1] == 1) 
                            live++; //bottom left corner
                }

                if( j+1 < n){
                    if(temp[i][j+1] == 1)
                        live++;
                    if( i> 0)
                        if(temp[i-1][j+1] == 1) 
                            live++; 
                }
                
                cout<<live<<endl;
                if( board[i][j] == 0){
                    if( live == 3)
                        board[i][j] = 1;
                }
                else{
                    if( live < 2 || live > 3)
                        board[i][j] = 0;
                }
            }
        }
    }
};