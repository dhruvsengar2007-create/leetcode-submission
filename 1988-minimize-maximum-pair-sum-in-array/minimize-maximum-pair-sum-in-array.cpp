class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin() , nums.end());//sorting array would automatically makes the pair of small and large number due to which the we get minimize maximum pair sum... and it is called greedy approach....
        int i=0 , j=n-1;
        int sum=0;
        int maxi=INT_MIN;
        while(i<=j){
            sum=nums[i]+nums[j];
            maxi=max(maxi,sum);
            i++;
            j--;
        }
        return maxi;
    }
};