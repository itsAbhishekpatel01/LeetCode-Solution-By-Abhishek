class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=candies[0];
        for(int i:candies) mx = max(i,mx);
        vector<bool>ans;
        for(int i:candies){
            if(i+extraCandies>=mx) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};