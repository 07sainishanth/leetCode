class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        // if( m == 1 || n == 1) return 1;
        // if( m == 0 || n == 0) return 0;
        unordered_map <string, int> store;
    
        return recursiveDynamicuniquePaths(store, m, n, obstacleGrid);
    }
    
    int recursiveDynamicuniquePaths(unordered_map <string, int>& data, int m, int n, vector<vector<int>>& obstacleGrid){
        // cout << obstacleGrid[0][0] << endl;
        if(obstacleGrid[0][0] == 1)
            return 0;
        if( m == 1 && n == 1) return 1;
        if( m == 0 || n == 0) return 0;
        string key = to_string(m)+","+to_string(n);
        if (data.find(key) != data.end()) return data[key];
        if(obstacleGrid[m-1][n-1] == 1){
            data[key] = 0;
            return data[key];
        }
        else
            data[key] = recursiveDynamicuniquePaths(data, m-1, n, obstacleGrid)+ recursiveDynamicuniquePaths(data, m, n-1, obstacleGrid);
        return data[key];
    }
};