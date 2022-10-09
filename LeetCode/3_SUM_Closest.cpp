// link to the problem :   https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0, min = INT_MAX;
        
        for(int i = 0; i < n-2; i++) {
            int lptr = i+1, rptr = n-1;
            while(lptr < rptr) {
                int sum = nums[i] + nums[lptr] + nums[rptr];
                if(abs(target - sum) < min) {
                    min = abs(target - sum);
                    ans = sum;
                }
                if(sum > target) rptr--;
                else lptr++;
            }
        }
        return ans;
    }
};
