class Solution {
public:
    int uniquePaths(int m, int n) {
        if( m == 1 || n == 1) return 1;
        if( m == 0 || n == 0) return 0;
        unordered_map <string, int> store;
        return recursiveDynamicuniquePaths(store, m, n);
    }
    int recursiveDynamicuniquePaths(unordered_map <string, int>& data, int m, int n){
        string key = to_string(m)+","+to_string(n);
        if (data.find(key) != data.end()) return data[key];
        if( m == 1 || n == 1) return 1;
        if( m == 0 || n == 0) return 0;
        data[key] = recursiveDynamicuniquePaths(data, m-1, n)+ recursiveDynamicuniquePaths(data, m, n-1);
            return data[key];
    }
};