class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int num1 = -1;
        int num2 = -1;
        int count1 = 0;
        int count2 = 0;
        
        
        // solving this problem using boyre moore algo
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == num1){
                count1++;
            }
            else if(nums[i] == num2){
                count2++;
            }
            else if(count1 == 0){
                num1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                num2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        
        // declearing the ans vector to store answer
        vector<int>ans;
        count1 = 0;
        count2 = 0;
        
        // counting values of num1 and num2
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == num1){
                count1++;
            }
            else if(nums[i] == num2){
                count2++;
            }
        }
        
        
        // if count1 is greater than n/3 then it is the majority element
        if(count1 > nums.size()/3){
            ans.push_back(num1);
        }
        
        // if count2 is greater than n/3 then it is the majority element
        if(count2 > nums.size()/3){
            ans.push_back(num2);
        }
        
        return ans;
    }
};