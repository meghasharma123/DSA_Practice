// main concept for improvised code
// check if unordered map already have the compliment and if yes then return i, mp[nums]
// else store the current i value -> mp[nums[i]] = i; that means in the unordered map value place the current index.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(mp.contains(diff)){
                return {i,mp[diff]};
            }
            mp[nums[i]] = i;
        }

        return {};
    }
};