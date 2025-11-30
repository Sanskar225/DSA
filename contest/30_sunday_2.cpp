class Solution {
public:
    int maxDistinct(string s) {
        string v = s;

        vector<bool> x(26, false);
        int count = 0;

        for(char c : v){
            if(!x[c - 'a']){
                x[c - 'a'] = true;
                count++;
            }
        }

        return count;
    }
};