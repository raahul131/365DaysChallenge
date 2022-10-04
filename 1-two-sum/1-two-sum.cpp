class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            // here we find int the hash table, if target is found after target-nums[i] in the  hash table then we store it in the ans, and after that store its index value also  
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;
    }
};