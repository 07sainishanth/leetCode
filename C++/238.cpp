class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                product *= nums[i];
            else 
                zero++;
        }
        vector<int> results;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                if(zero > 0)
                    results.push_back(0);
                else 
                    results.push_back(product/nums[i]);
            }
            else{
                if(zero > 1)
                    results.push_back(0);
                else 
                    results.push_back(product);
            }
        }
        return results;
    }
};