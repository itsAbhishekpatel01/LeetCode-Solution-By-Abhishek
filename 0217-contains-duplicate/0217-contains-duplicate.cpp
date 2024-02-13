class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        for(int i:nums)
            if(mpp[i]++) return true;
        return false;
    }
};