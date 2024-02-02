class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int i=1, j=1;
        int len=1;
        for(int j=1;j<n;j++){
            if(len==2){ 
                //find greater
                if(nums[j]>nums[i-1]){
                    swap(nums[i],nums[j]);
                    i++;
                    len=1;
                }
            } 
            else{
                //try to find equal
                if(nums[j]==nums[i-1]){
                    swap(nums[i],nums[j]);
                    len=2;
                    i++;
                }
                else if(nums[j]>nums[i-1]){
                    swap(nums[i],nums[j]);
                    i++;
                    len=1;
                }
            }
        }
        return i;
    }
    
};