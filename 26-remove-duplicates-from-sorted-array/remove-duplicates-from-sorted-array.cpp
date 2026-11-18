class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        set<int>s;
        for(auto i:arr){
            s.insert(i);
        }
        int k=0;
        for(auto i:s){
            arr[k++]=i;
        }
        return k;
        
    }
};