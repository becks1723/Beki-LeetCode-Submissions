//This was inspired by a different person's code on the discussion page

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> sol;
        if(nums[0] > 0)
            return sol;
        for(int x = 0; x < nums.size(); x++) {
            if(nums[x] > 0)
                break;
            if(x != 0 && nums[x] == nums[x-1])
                continue;
            int second = x+1;
            int third = nums.size()-1;
            while(second < third) {
                int sum = nums[x] + nums[second] + nums[third];
                //cout << x << " " << second << " " << third << "\n";
                if(sum == 0) {
                    sol.push_back(vector<int>{nums[x],nums[second],nums[third]}); 
                    int prevsecond = nums[second];
                    int prevthird = nums[third];
                    while(second < third && nums[second] == prevsecond)
                        second++;
                    while(second < third && nums[third] == prevthird)
                        third--;
                }
                if(sum > 0)
                    third--;
                if(sum < 0)
                    second++;
            }
        }
        return sol;
    }
};
