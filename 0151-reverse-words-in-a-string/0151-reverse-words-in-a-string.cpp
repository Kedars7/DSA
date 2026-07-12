class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string res = "";
        int i = 0;

        while(i < n) {
            while(i < n && s[i] == ' ')
                i++;
            
            if(i >= n) break;

            string temp = "";
            while(i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }

            if(res == "") 
                res = temp;
            else
                res = temp + ' ' + res;
        }

        return res;
    }
};