#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int mincostTicket(vector<int>& days, vector<int>& costs) {
      vector <int> dp(366);
      int j = 0;
      for(int i = 1; i < 366; i++){
         dp[i] = costs[0] + dp[i - 1];
         if(i - 7 >= 0){
            dp[i] = min(dp[i - 7] + costs[1], dp[i]);
         }
         if(i - 30 >= 0){
            dp[i] = min(dp[i - 30] + costs[2], dp[i]);
         }
         if(j < days.size() && days[j] == i){
            j++;
         }else
            dp[i] = min(dp[i], dp[i - 1]);
      }
      return dp[365];
   }
};
main(){
   vector<int> v = {1,2,3,4,5,6,7,8,9,10,30,31};
   vector<int> v1 = {2,7,15};
   Solution ob;
   cout << (ob.mincostTickets(v, v1));
}

// contributed by Rufus paul
