class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int j=k-1;
        int maxCount=k;
        int count=0;
        int m=0;
        while(j<blocks.length()){
            count=0;
            for(int i=m;i<=j;i++){
                if(blocks[i]=='W'){
                    count++;
                }
            }

            if(count!=0 && count<maxCount){
                 maxCount=count;
            }else if(count==0){
                return 0;
            }
            j++;
            m++;
        }

        return maxCount;

    }
};