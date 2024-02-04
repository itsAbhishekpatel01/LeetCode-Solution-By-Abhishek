class Solution {
public:
    string reverseWords(string s) {
        string temp="",ans="";
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]==' ' && temp=="") continue;
		if(s[i]!=32) temp = s[i]+temp;
		else if(s[i]==32){
			ans +=temp;
			ans +=" ";
			temp="";
		}
	}	
	ans +=temp;
    int i=ans.size()-1;
    while(ans[i--]==32){
        ans = ans.substr(0,ans.size()-1);
    }
	return ans;
    }
};