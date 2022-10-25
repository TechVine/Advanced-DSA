#include<bits/stdc++.h>
using namespace std;





//? Bottom Up approach

class Solution {
public:
    int func(int n){
        vector<int> dp(n+1,INT32_MAX);
        dp[0] = 0;

        for(int i=1; i<=n; ++i){
            for(int j=1; j*j<=n; ++j){
                if(i-j*j >= 0)
                    dp[i] = min(dp[i],dp[i-j*j] + 1);
            }
        }
        return dp[n];
    }

    int numSquares(int n) {
        return func(n);
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
