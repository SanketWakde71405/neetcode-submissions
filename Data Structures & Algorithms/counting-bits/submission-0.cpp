class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> v;
        int d=0;
        int count=0;
        for(int i=0;i<=n;i++){
            d=i;
            while(d>0){
                if(d&1==1) count++;
                d>>=1;
            }

            v.push_back(count);
            count=0;

        }

        return v;

    }
};
