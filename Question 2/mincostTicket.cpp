#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        int n = days.size();
        vector<int> dp(n, -1);

        return dfs(days, 0, n, costs, dp);
    }

private:
    int dfs(const vector<int>& days, int index, int n, const vector<int>& costs, vector<int>& dp){

        if(index >= n) return 0;
        if(dp[index] != -1) return dp[index];

        int res = costs[0] + dfs(days, index + 1, n, costs, dp);

        int i1 = upper_bound(days.begin(), days.end(), days[index] + 6) - days.begin();
        res = min(res, costs[1] + dfs(days, i1, n, costs, dp));

        int i2 = upper_bound(days.begin(), days.end(), days[index] + 29) - days.begin();
        res = min(res, costs[2] + dfs(days, i2, n, costs, dp));

        return dp[index] = res;
    }
};


int main() {

    return 0;
}
