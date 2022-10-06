class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count = 0;
        int n = nums.size();
        
        for(int i = 1; i < n; i++){
            if(nums[i-1] > nums[i])
                count++;
        }
        
        // this is to check that the last element of the array is greater than the starting element of the array
        if(nums[n-1] > nums[0]){
                count++;
            }
        
        
        if(count <= 1)
            return true;
        
        return false;
    }
};