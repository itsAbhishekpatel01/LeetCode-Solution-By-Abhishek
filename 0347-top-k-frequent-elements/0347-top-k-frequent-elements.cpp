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
    /*
    My approach:
    maine do map bnaya hai , pahle map me to har ek number ki frequency store karali hai
    fir ek dusra multimap liya hai jisme mene phle map ko ulta krke dal diya hai
    dhyan rahe ki dusra wala multimap hona jaruri hai kyuki ek se jyada elements ki frequency
    same ho sakti hai
    ab bas k times multimap ko pichhe se traverse krna hai 
    use ek vector me dalte jana hai 
    aur last me usko return kr dena hai
    */
};