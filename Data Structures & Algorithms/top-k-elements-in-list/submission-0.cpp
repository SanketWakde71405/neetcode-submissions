class Solution {
public:
    bool static cmp(pair<int,int> &a, pair<int,int> &b){
        return a.second> b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

     vector<pair<int, int> > A; 

    for (auto& it : mp) { 
        A.push_back(it); 
    } 

    sort(A.begin(),A.end(),cmp);

    vector<int> v;

    for(int i=0;i<k;i++){
       
        v.push_back(A[i].first);
    }

  

    return v;



    }
};
