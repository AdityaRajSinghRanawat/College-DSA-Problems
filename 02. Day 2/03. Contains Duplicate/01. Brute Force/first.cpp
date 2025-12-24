#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
        Problem: 217 [leetcode]
        Contains Duplicate
    */
    class Solution
    {
    public:
        bool containsDuplicate(vector<int> &nums)
        {
            // Time Complexity: O(n logn)

            sort(nums.begin(), nums.end());
            int n = nums.size();

            for (int i = 0; i < n - 1; i++)
            { // n - 1 : because we dont want to overflow
                if (nums[i] == nums[i + 1])
                {
                    return true;
                }
            }

            return false;
        }
    };

    return 0;
}