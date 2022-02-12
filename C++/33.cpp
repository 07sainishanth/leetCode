class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0;
        int high = nums.size()-1;
       
        while(low < high){
            int mid = (low + high)/2;
            if(nums[mid] > nums[high]) 
                low = mid+1;
            else 
                high = mid;
        }
        
        int rotate = low;
        low = 0;
        high = nums.size()-1;
        
        while(low <= high){
            int mid =(low + high )/2;
            int realmid = ( mid + rotate ) % nums.size();
            
            if(nums[realmid] == target)
                return realmid;
            
            if(nums[realmid] < target)
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return -1;
        
    }
};