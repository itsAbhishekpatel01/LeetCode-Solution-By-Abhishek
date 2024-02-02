class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1,j=nums1.size()-1,k=nums2.size()-1;
    while(k>=0){
        if(i>=0 && nums1[i]>=nums2[k]){
            nums1[j]=nums1[i];
            j--; i--;
        }
        else if( i<0 || nums1[i]<nums2[k]){
            nums1[j]=nums2[k];
            k--; j--;
        }
    }
    }
};