class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> map_1;
        for(auto x: nums)
            map_1[x]++;
        for(auto x: map_1){
            if (x.second == 1)
                return x.first;
        }
        return 0;
    }
};