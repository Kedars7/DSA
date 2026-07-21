class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        long long temp = abs((long long)x);
        while(temp != 0)
        {
            int digit = temp % 10;
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) return 0;

            reversed = reversed*10 + digit;
            temp = temp / 10;
        }
        if(x < 0) reversed = -1 * reversed;
        return static_cast<int>(reversed);
    }
};