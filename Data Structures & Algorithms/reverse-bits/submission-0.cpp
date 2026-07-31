class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        string s="";

        while(n>0){
            s+=(n&1)+'0';
            n>>=1;
        }

        if(s.length()<32){
            while(s.length()!=32){
                s+="0";
            }
        }
         
        n=bitset<32>(s).to_ulong();
        

    
        return n;
    }
};
