class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        for(int x = 0; x < nums.size(); x++) {
            for(int y = 1; y < nums.size(); y++) {
                int a = nums[x];
                int b = nums[y];
                if(a+b == target && x != y) {
                    sol.push_back(x);
                    sol.push_back(y);
                    return sol;
                }
            }
        }
        return sol;
    }
};
