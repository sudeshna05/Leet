class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
            return 0;
        vector<int>dp(amount+1,amount+1);
        dp[0]=0;
        for(int a=1;a<+amount+1;a++)
        {
            for(int c=0;c<coins.size();c++)
            {
                if((a-coins[c])>=0)
                    dp[a]=min(dp[a],1+dp[a-coins[c]]);
            }
        }
        if(dp[amount]==amount+1){
            return -1;
        }
            return dp[amount];
    }
};