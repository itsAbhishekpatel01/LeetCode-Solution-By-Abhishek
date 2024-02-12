class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        bool plot;
        for(int i=0;i<m;i++){
            plot=false;
            if(flowerbed[i]==0) plot=true; else continue;
            if(i>0 && flowerbed[i-1]) plot=false;
            if(i<m-1 && flowerbed[i+1]) plot=false;
            if(plot){
                flowerbed[i]=1;
                n--;
            }
        }
        if(n>0) return false;
        return true;
    }
};