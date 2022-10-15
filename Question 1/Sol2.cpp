//? Code contributed by : Dev Kumar
//? Github : https://github.com/DevDK12/

#include<bits/stdc++.h>
using namespace std;




//? Top Down

//* It is Optimised approach
//* This approach does not require auxilary array of all possible squares

class Solution {
public:
    int dp[10010];
    int func(int n){

        if(n==0) return 0;
        if(dp[n] != -1) return dp[n];

        int ans = INT32_MAX;
        int i = 1;

        while(i*i<=n){
            if(n-i*i >= 0)
                ans = min(ans,func(n-i*i)+1);
            i++;
        }

        return dp[n] = ans;
    }

    int numSquares(int n) {
        memset(dp, -1, sizeof(dp));
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