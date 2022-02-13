class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long size = beans.size(), ans = LLONG_MAX, sum = accumulate(beans.begin(), beans.end(), 0L);
        sort(beans.begin(), beans.end());
        for (int i = 0; i < size; ++i) {
            ans = min(ans, sum - (size - i) * beans[i]);
        }
        return ans;
    }
};