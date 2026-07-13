class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int n1 = s.length();
        int n2 = t.length();

        if(n1 != n2) return false;

        for(int i=0; i<n1; i++) {
            arr[s[i] - 'a']++;
        }

        for(int j=0; j<n2; j++) {
            char ch = t[j];
            arr[ch-'a']--;
            if(arr[ch - 'a'] < 0) 
                return false;
        }

        return true;
    }
};