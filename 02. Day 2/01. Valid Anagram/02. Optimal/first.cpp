#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 242 [leetcode]
        Valid Anagram
    */
    class Solution
    {
    public:
        bool isAnagram(string s, string t)
        {
            // Time Complexity: O(n)

            vector<int> count(26, 0);

            for (char ch : s)
            {                      // reference = &ch or value = ch
                count[ch - 'a']++; // ch = value = 23 // &ch = address = 487njd = not correct
            }
            for (char ch : t)
            {
                count[ch - 'a']--;
            }

            for (int val : count)
            {
                if (val != 0)
                {
                    return false;
                }
            }

            return true;
        }
    };

    return 0;
}