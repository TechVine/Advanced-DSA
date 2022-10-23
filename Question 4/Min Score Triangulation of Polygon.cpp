#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
   class Solution {
   public:
   int minScoreTriangulationofpolygon(vector<int>& A) {
     // Max dp size 50 X 50
      lli dp[50][50];
      for(int i = 0; i < 50; i++){
         for(int j = 0; j < 50; j++){
            dp[i][j] = 0;
         }
      }
      int n = A.size();
      for(int l = 3; l <= n; l++){
         for(int i = 0, j = l - 1; j < n;i++, j++){
            for(int k = i + 1; k < j; k++){
               dp[i][j] = min(dp[i][j] == 0?INT_MAX : dp[i][j],
               dp[i][k] + dp[k][j] + A[i] * A[k] * A[j]);
            }
         }
      }
      return dp[0][n - 1];
   }
};
// main funtion
main(){
  // static input 
   vector<int> v1 = {3,7,4,5};
   Solution ob;
   cout << (ob.minScoreTriangulationofpolygon(v1));
}

// contributed by Rufus paul
