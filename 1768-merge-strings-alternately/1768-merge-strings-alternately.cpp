class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length(), n2 = word2.length();
        int i=0, j=0;
        string res = "";

        while(i < n1 && j < n2) {
            res = res + word1[i] + word2[j];

            i++;
            j++;
        }

        if(i < n1) {
            res = res + word1.substr(i);
        }
        else if( j < n2) {
            res = res + word2.substr(j);
        }

        return res;
    }
};