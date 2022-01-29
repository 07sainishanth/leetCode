class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret_arr;
        
        vector<int> a1;
        a1.push_back(1);
        ret_arr.push_back(a1);
        if(numRows == 1){
            
            return ret_arr;
        }
        vector<int> a2;
        a2.push_back(1);
        a2.push_back(1);
        ret_arr.push_back(a2);
        if(numRows == 2){
            
            return ret_arr;
        }
        for(int i = 2; i < numRows; i++){
            vector<int> a3;
            a3.push_back(1);
            // cout << ret_arr[1][0] << " ";
            for(int j = 1; j < i; j++){
                a3.push_back(ret_arr[i-1][j-1]+ret_arr[i-1][j]);
                // cout << ret_arr[i-1][j-1]+ret_arr[i-1][j] << " ";
            }
            a3.push_back(1);
            ret_arr.push_back(a3);
        }
        
        return ret_arr;
    }
};