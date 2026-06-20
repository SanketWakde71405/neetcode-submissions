class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        long long int num=0;
        vector<int> digits_one;

        for(int i=0;i<digits.size();i++){
            num=(num*10)+digits[i];
        }
        cout << num;
        num++;
        
        while(num!=0){
            digits_one.push_back(num%10);
            num/=10;
        }

        reverse(digits_one.begin(),digits_one.end());

        return digits_one;

    }
};
