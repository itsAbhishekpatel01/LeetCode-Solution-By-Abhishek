class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string temp;
        string ans;
        for(char c:s){
            temp+=c;
            if(c=='(') depth++;
            else if(c==')') depth--;
            if(depth==0){
                ans+=temp.substr(1,temp.size()-2);
                temp="";
            }
        }
        return ans;
    }
};