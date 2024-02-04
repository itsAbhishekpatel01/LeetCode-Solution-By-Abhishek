class Solution {
public:
    string largestOddNumber(string num) {
        int x=-1;
        for(int i=num.size()-1; i>=0; i--)
        {
            if((num[i]-'0')%2==1)
            {
                x=i;
                break;
            }
        }
        if(x==-1) return "";
        else return num.substr(0,x+1);
    }
};