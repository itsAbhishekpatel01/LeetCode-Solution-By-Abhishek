class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
       vector<int>ans;
        vector<int>prefix(n),postfix(n);
        int pre_sum=1,post_sum=1;
        for(int i=0;i<nums.size();i++){
            prefix[i]=nums[i]*pre_sum;
            pre_sum=prefix[i];
            postfix[n-i-1]=nums[n-i-1]*post_sum;
            post_sum=postfix[n-i-1];
        }
        for(int i=0;i<n;i++){
            int product;
            if(i==0) product = postfix[1];
            else if(i==n-1) product = prefix[n-2];
            else product = prefix[i-1]*postfix[i+1];
            ans.push_back(product);
        }
        return ans;
        /*
        Do array banake prefix product aur postfix product nikal liya hai
        Fir har index ke liye us index ke phle tak ka prefix and next index 
        tak ke postfix ka product ko ans me push krte jana hai
        iski time complexity O(n) 
        and space complexity O(n)
        hai
        lekin hum space complexity ko aur bhi kam kar sakte hain
        */
    }
};