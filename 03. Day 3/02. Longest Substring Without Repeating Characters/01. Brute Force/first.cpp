#include <iostream>
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
            // Time Complexity: O(n^2)

            int n = s.length();
            int maxLength = 0;

            for (int i = 0; i < n; i++)
            {
                unordered_set<char> set;
                int len = 0;

                for (int j = i; j < n; j++)
                {
                    if (set.count(s[j]))
                    { // already exist
                        break;
                    }
                    set.insert(s[j]);
                    len++;
                }
                maxLength = max(len, maxLength);
            }

            return maxLength;
        }
    };

    return 0;
}