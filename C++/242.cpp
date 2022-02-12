class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length () != t.length())
            return false;

        // O(nlogn)
        vector<char>s_;
        vector<char>t_;
        for(int i = 0; i < s.length(); i++){
            s_.push_back(s[i]);
            t_.push_back(t[i]);
        }
        sort(s_.begin(), s_.end());
        sort(t_.begin(), t_.end());
        if (equal(s_.begin(), s_.begin() + s.length(), t_.begin()))
            return true;
        return false;

        //O(n)
        int n = s.length();
        unordered_map<char, int>hash_map;
        for(int i = 0; i < s.length(); i++){
            hash_map[s[i]]++;
            hash_map[t[i]]--;
        }
        
        for (auto iter : hash_map)
            if (iter.second) return false;
        return true;
    }
};