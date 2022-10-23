// Solution by Nirmal Shah to find perfect squate number

// Solution class starts
class Solution {
    int solve(int n) // solve method
    {
        if(n<=3)
            return n;
        
        int ans=n;
        for(int i=1;i*i<=n;++i) // to find the minimum element using for loop
           ans = min(ans,1+solve(n-i*i)); 
            
        return ans;
    }
public:
    int numSquares(int n) {  // numSquares method
        int ans = solve(n);
        return ans;
    }
};*/

static int fastio = []() {  // static variable fastio called...
    #define endl '\n'
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(0);
    return 0;
}();
