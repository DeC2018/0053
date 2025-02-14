#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;

        for (const int num : nums) {
            sum += num;
            ans = std::max(ans, sum);
            sum = std::max(sum, 0);
        }

        return ans;
    }
};

int main() {
    std::vector<int> nums1 = {-2,1,-3,4,-1,2,1,-5,4};
    std::vector<int> nums2 = {1};
    std::vector<int> nums3 = {5,4,-1,7,8};

    Solution solution;

    std::cout << "Input: nums = [-2,1,-3,4,-1,2,1,-5,4]" << std::endl;
    std::cout << "Output: " << solution.maxSubArray(nums1) << std::endl;

    std::cout << "Input: nums = [1]" << std::endl;
    std::cout << "Output: " << solution.maxSubArray(nums2) << std::endl;

    std::cout << "Input: nums = [5,4,-1,7,8]" << std::endl;
    std::cout << "Output: " << solution.maxSubArray(nums3) << std::endl;

    return 0;
}
