class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int cur_sum=0,max_sum=nums[0];
        for(int i:nums){
            cur_sum+=i;
            max_sum = max(cur_sum,max_sum);
            if(cur_sum<0) cur_sum=0;
        }
        
        return max_sum;
    }
};