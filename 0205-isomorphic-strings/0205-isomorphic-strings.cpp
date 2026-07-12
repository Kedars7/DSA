class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1 != n2) return false;

        map<char, char> mp1;
        map<char, char> mp2;

        int i=0, j=0;
        while(i<n1) {

            if( (mp1.find(s[i]) != mp1.end() && mp1[s[i]] != t[j]) || 
            (mp2.find(t[j]) != mp2.end() && mp2[t[j]] != s[i]) ){
                return false;
            }

            mp1[s[i]] = t[j];
            mp2[t[j]] = s[i];
            i++;
            j++;
        }

        return true;
    }
};