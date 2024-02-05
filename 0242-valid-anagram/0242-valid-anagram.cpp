class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m1,m2;
        int n=s.size(),m=t.size();
        for(int i=0;i<min(n,m);i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        return (n==m) && (m1==m2);
    }
};