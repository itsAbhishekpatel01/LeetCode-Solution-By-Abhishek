class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        for(int j=i;j<n;j++){
            if(nums[i]==val){
                if(nums[j]!=val){
                    swap(nums[i],nums[j]);
                    i++;
                }
            }
            else i++;
        }
        return i;
    }
};