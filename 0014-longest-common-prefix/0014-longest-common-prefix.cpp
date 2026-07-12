class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string prev = strs[0];

        for(int i=1; i<n; i++) {
            int n1 = prev.length();
            int n2 = strs[i].length();
            int j=0, k=0;

            string temp = "";
            while(j<n1 && k<n2 && prev[j] == strs[i][k]) {
                temp += prev[j];
                j++;
                k++;
            }

            if(temp == "") return "";

            prev = temp;
        }

        return prev;
    }
};