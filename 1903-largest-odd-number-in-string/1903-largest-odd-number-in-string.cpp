class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        string res = "";

        for(int i=n-1; i>=0; i--) {
            int number = num[i] - '0';
            if( number%2 != 0) {
                res = num.substr(0, i+1);
                break;
            }
                
        }

        return res;
    }
};