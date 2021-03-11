class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int len = coins.size();
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        
        for(int i=1; i<=amount; ++i)
        {
            for(int j=0; j<len; ++j)
            {
                if(coins[j] <= i)
                {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
    }
};