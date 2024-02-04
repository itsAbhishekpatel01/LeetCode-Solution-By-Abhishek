class Solution {
public:
    bool rotateString(string s, string goal) {
    int n=s.size();
    while(n--){
        //lets right shift
        char c=s[s.size()-1];
        for(int i=s.size()-1;i>=1;i--) s[i]=s[i-1];
        s[0]=c;
        if(s==goal) return true;
    }
    return false;
    }
    
};