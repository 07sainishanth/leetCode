class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() == 0)
            return mat;
        int rows = mat.size();
        int columns = mat[0].size();
        if(r*c != rows*columns)
            return mat;
        vector<int> array_;
        for(int i =0; i<rows; i++){
            for(int j = 0; j<columns; j++){
                array_.push_back(mat[i][j]);
            }
        }
        int k = 0;
        for(int i : array_) cout << i;
        vector<vector<int>> matrix(r, std::vector<int>(c, 0));;
        for(int i =0; i<r; i++){
            for(int j = 0; j<c; j++){
                matrix[i][j] = array_[k];
                k++;
            }
        }
        return matrix;
    }
};