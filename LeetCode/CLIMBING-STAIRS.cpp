// Link to Leetcode problem: https://leetcode.com/problems/climbing-stairs/
// Runtime: 6ms
// Memory: 5.9mb

class Solution {
public:
int dp[46];
int func (int i)
{
    if(i==0)
    return 1;
    if(i<0)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    return dp[i]= func(i-1)+func (i-2);
}
int climbStairs(int n)
{
    memset(dp,-1,sizeof(dp));
    return func(n);
}
};