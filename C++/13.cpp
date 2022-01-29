class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap= {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };
        int value = romanMap[s.back()];
        for(int i = s.length()-2; i>=0; --i){
            if(romanMap[s[i]] < romanMap[s[i+1]])
                value -= romanMap[s[i]];
            else
                value += romanMap[s[i]];
        }
        return value;
    }
};