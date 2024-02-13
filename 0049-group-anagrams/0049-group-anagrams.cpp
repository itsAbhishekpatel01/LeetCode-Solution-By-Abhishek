class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>mpp;
        for(string s:strs){
            map<char,int>m;
            for(char c:s) m[c]++;
            mpp[m].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it:mpp) ans.push_back(it.second);
        return ans;
    }
};