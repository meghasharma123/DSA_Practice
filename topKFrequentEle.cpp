// solution:
// first we count numbers and then for k elements we loop through it and find the max freq element and delete it from the mp.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(int i=0;i<k;i++){
            int maxFreq = 0;
            int maxVal = 0;

            for(auto& [val,cnt]:mp){
                if(cnt>maxFreq){
                    maxFreq = cnt;
                    maxVal = val;
                }
            }
            
            res.push_back(maxVal);
            mp.erase(maxVal);
        }

        return res;
    }
};