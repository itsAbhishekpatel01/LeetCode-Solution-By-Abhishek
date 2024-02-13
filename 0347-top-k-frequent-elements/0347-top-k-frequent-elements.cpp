class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int>mpp;
        for(int i:nums)mpp[i]++;
      multimap<int,int>m;
        for(auto it:mpp){
            m.insert({it.second,it.first});
        }
        vector<int>ans;
        auto it=m.end();
        
        while(k--){
            --it;
            ans.push_back(it->second);
        }
        return ans;
    }
};