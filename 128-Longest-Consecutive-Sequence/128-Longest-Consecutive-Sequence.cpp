class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // checking, if the length is eqaul to 0 then print 0
        if(nums.size() == 0){
            return 0;
        }
        
        // sorting the array using inbuilt sort function
        sort(nums.begin(), nums.end());
        
        int currCnt = 1;
        int maxLen = 0;
        
        for(int i = 1; i < nums.size(); i++){
            
            if(nums[i] == nums[i-1]+1){ // condition of the consecutive element
                currCnt++;
            }
            else if(nums[i] != nums[i-1]){
                maxLen = max(maxLen, currCnt); // updating the maxLen value between maxlen and                                                       currCnt value
                currCnt = 1; // re-Initializing the currCnt value
            }
        }
        maxLen = max(maxLen, currCnt); // updating the maxLen value
        
        return maxLen;
    }
};