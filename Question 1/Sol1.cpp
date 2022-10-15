//? Code contributed by : Dev Kumar
//? Github : https://github.com/DevDK12/

#include<bits/stdc++.h>
using namespace std;




//? Top Down , bruteforce approach
class Solution {
public:
    int dp[10010];
    int func(int n, vector<int>& sqr){

        if(n==0) return 0;
        if(dp[n] != -1) return dp[n];

        int ans = INT32_MAX;
        for(auto child : sqr){
            if(n-child >= 0)
                ans = min(ans,func(n-child, sqr)+1);
        }
        return dp[n] = ans;
    }

    int numSquares(int n) {
        vector<int> squares;
        for(int i=1; i<=n; ++i){
            if(i*i > n){
                break;
            }
            squares.push_back(i*i);
        }
        memset(dp, -1, sizeof(dp));
        return func(n,squares);
    }
};




void solve(){

	int n;
	cin >> n;


    Solution s;
    cout << s.numSquares(n) << endl;

}


int main(){
    
    
    solve();
    
    return 0;
    
}