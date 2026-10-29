// nums[i] + nums[j] + nums[k] == 0
// first we sort this array so that we can predict if we have to move forward or backward
// 

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>res;

    for(int i=0;i<nums.size()-2;i++){
        if(i>0 and nums[i-1] == nums[i]){
            continue;
        }

        int left = i+1;
        int right = nums.size() -1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                // Store the triplet
                // Move both pointers
                res.push_back({ nums[i],nums[left], nums[right]});
                left++;
                right--;

                while(left<right && nums[left] == nums[left - 1]){
                    left++;
                }

                while(left<right && nums[right] == nums[right + 1]){
                    right--;
                }
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return res;
}