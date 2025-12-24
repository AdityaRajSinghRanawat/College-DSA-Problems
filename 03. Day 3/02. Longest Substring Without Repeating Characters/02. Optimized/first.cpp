#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    /*
        Problem: 3 [leetcode]
        Longest Substring Without Repeating Characters
    */
    class Solution
    {
    public:
        int lengthOfLongestSubstring(string s)
        {
            // Time Complexity: O(n)

            unordered_set<char> set;
            int n = s.length();
            int maxLength = 0;
            int left = 0, right = 0;

            while (right < n)
            {
                while (set.count(s[right]))
                { // char already exist in set
                    set.erase(s[left]);
                    left++;
                }
                set.insert(s[right]);                         // if not exist then insert
                maxLength = max(maxLength, right - left + 1); // +1 : since we inserted the index 0 element
                right++;
            }

            return maxLength;
        }
    };

    return 0;
}