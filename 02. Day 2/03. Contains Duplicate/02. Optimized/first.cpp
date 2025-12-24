#include <iostream>
#include <vector>
#include <unordered_set>
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
            // Time Complexity: O(n)

            unordered_set<int> seen;

            for (int val : nums)
            {
                if (seen.find(val) != seen.end())
                {
                    return true;
                }
                seen.insert(val);
            }

            return false;
        }
    };

    return 0;
}