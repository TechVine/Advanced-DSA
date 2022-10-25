class Solution {
    public int numSquares(int n) {
        int dp[]=new int[n+1];
        Arrays.fill(dp,n);
        dp[0]=0;
        for(int i=0;i<n+1;i++){
            for(int j=1;j<i+1;j++){
                int square=j*j;
                if(i-square<0){
                    break;
                }else{
                    dp[i]=Math.min(dp[i],1+dp[i-square]);
                }
            }
        }
        return dp[n];
    }
}