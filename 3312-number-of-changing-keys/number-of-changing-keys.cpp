class Solution {
public:
    int countKeyChanges(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n=s.size();
        int cnt=0;
        for(int i=0 ; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(s[i]!=s[j]){
                    cnt++;
                    i=j;
                }
            }
        }
        return cnt;
    }
};