// class Solution {
// public:
//     vector<int> memo;
//     int minCostClimbingStairs(vector<int>& cost) {
//         memo.resize(cost.size(),-1);
//         return min(dfs(cost,0),dfs(cost,1));
//     }
//     int dfs(vector<int>& cost, int i){
//         if(i>=cost.size()){
//             return 0;
//         }
//         if(memo[i]!=-1){
//             return memo[i];
//         }
//         memo[i]=cost[i]+min(dfs(cost, i+1),dfs(cost,i+2));
//         return memo[i];
//     }
    
// };

class Solution{
    public:

    int minCostClimbingStairs(vector<int>& cost){
        int n=cost.size();
        vector<int> dp(n+1);
        dp[0]=0; dp[1]=0;
        for(int i=2;i<=n;i++){
            dp[i]=min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2]);
            
// come from step i-1 , after spending dp[i-1] to get there and then pay cost[i-1]
        }
        return dp[n];
    }
};


