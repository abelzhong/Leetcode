class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() < 2)
        {
            return {};
        }
        
        int left = 0;
        int right = nums.size() - 1;
        
        while(left < right)
        {
            int sum = nums[left] + nums[right];
            
            if(sum == target)
            {
                return {left+1, right+1};
            }
            else if(sum > target)
            {
                --right;
            }
            else
            {
                ++left;
            }
        }
        
        return {};
    }
};