class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>v(26,0);
        for(char &ch:text) v[ch-'a']++;

        return min({v['b'-'a'],v['a'-'a'],v['l'-'a']/2,v['o'-'a']/2,v['n'-'a']});
    }
};