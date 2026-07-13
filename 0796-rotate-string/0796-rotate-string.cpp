class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.length();
        int n2 = goal.length();
        if(n1 != n2) return false;

        for(int i=0; i<n2; i++) {
            if(s[0] == goal[i]) {
                string temp = goal.substr(i) + goal.substr(0, i);

                if(temp == s)
                    return true;
            }
        }

        return false;
    }
};