class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
       map<int ,int> mpp;
       for(int i=0 ; i<n ; i++){
            int a=arr[i];
            int b=target-a;
            if(mpp.find(b)!=mpp.end()){
                return {mpp[b] ,i};
            }
            mpp[a]=i;
       }
       return {};
    }
   
};