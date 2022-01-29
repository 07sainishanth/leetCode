class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][0] > target)
                return false;
            else if(matrix[i][matrix[i].size()-1] < target)
                continue;
            else if(find(matrix[i].begin(), matrix[i].end(), target) != matrix[i].end())
                return true;
            else 
                return false;
        }
        return false;
    }
};