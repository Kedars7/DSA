class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length(), n2 = t.length();
        if(n1 == 0) return true;
        int ind = 0;

        for(int i=0; i<n2; i++) {
            if(t[i] == s[ind]) {
                ind++;

                if(ind == n1) return true;
            }
        }

        return false;
    }
};