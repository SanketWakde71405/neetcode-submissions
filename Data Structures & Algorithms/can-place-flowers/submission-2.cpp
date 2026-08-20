class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int c1=0;
        int allowedc1=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1) c1++;
        }

        allowedc1=flowerbed.size()/2;

        if(flowerbed.size()%2!=0 && flowerbed[flowerbed.size()/2]==0) allowedc1++;

        if(n>allowedc1) return false;

        allowedc1-=c1;


        allowedc1-=n;

        if(allowedc1<0) return false;

        return true;



    
        


    }
};