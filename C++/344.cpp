class Solution {
public:
    void reverseString(vector<char>& s) {
        int sa = s.size();
        int i = 0;
        while(i < sa/2){
            char p = s[i];
            s[i] = s[sa-i-1];
            s[sa-i-1] = p;
            i++;
        }
    }
};