class Solution {
public:
    void merge(vector<int>* a, int low, int mid, int high){
        vector<int> b(high+1);
        int i=low;
        int j=mid+1;
        int k=low;
        
        while(i<=mid && j<=high){
            if((*a)[i]<(*a)[j]){
                 b[k]=(*a)[i];
                 k++;
                 i++;
            }else{
                b[k]=(*a)[j];
                k++;
                j++;
            }
        }

        while(i<=mid){
             b[k]=(*a)[i];
             k++;
             i++;
        }

         while(j<=high){
             b[k]=(*a)[j];
             k++;
             j++;
        }

        for(int i=low;i<=high;i++){
            (*a)[i]=b[i];
        }

    }
       
    void mergeSort(vector<int>* a, int low, int high){
        int mid;
        if(low<high){
             mid=(low+high)/2;
             mergeSort(a,low,mid);
             mergeSort(a,mid+1,high);
             merge(a,low,mid,high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(&nums,0,nums.size()-1);

        return nums;
    }
};