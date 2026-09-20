class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=0;
        for(int i=0;i<arr.size()-1;i++){
            max=-1;
            for(int j=i+1;j<arr.size();j++){
               if(arr[j]>max){
                  max=arr[j];
               }
            }
            arr[i]=max;
        }
        arr[arr.size()-1]=-1;
        return arr;
        
    }
};