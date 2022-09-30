// link to leetcode problem : https://leetcode.com/problems/majority-element/
// Runtime : 46 ms
// Memory : 19.6mb
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};