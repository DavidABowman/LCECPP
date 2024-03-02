//Given an array of integers nums and an integer target, 
//return indices of the two numbers such that they add up to target.

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; //Map to store number-index pairs

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                //Found the complement, return the indicies
                return {numMap[complement], i};
            }
            ///Store the current number and its index
            numMap[nums[i]] = i;
        }
        //If no solution is found, just return an empty vector
        return {};
    }
};
//3ms - SexyAF.