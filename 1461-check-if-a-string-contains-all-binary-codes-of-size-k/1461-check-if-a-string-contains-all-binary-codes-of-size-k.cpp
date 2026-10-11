class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        
        if (k > n) return false;

        map<string, int> mpp;

        for (int i = 0; i <= n - k; i++) {
            string sub = s.substr(i, k);
            mpp[sub]++;
        }

        return mpp.size() == (1 << k);
    }
};