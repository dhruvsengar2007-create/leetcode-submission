class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0 ; int j =0; int k=0;
        string word3="";
        while(i<n && j<m){
            word3.push_back(word1[i++]);
            word3.push_back(word2[j++]);
        }
        while(i<n){
            word3.push_back(word1[i++]);
        }
        while(j<m){
            word3.push_back(word2[j++]);
        }
        return word3;
    }
};