class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int,int>mpp;
        vector<int>ans(2);
     for(int i=0;i<nums.size();i++){
        int req = target-nums[i];
         if(mpp.find(req)!=mpp.end()){
             ans[0]=i; ans[1]=mpp[req];
             break;
         }  
         mpp[nums[i]]=i;
     }
        return ans;
    }
};