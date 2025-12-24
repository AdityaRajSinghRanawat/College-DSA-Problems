#include <iostream>
#include <vector>
#include <unordered_map>
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

            unordered_map<char, int> m1;
            unordered_map<char, int> m2;

            if (s.length() != t.length())
            {
                return false;
            }

            /*
                s = "anagram"

                m1 = { }

                // Step 1:

                m1['a']++;
                -Key 'a' does not exist
                - unordered_map creates it
                - Default value = 0
                -- then "++" Increments 0 -> 1
                m1 = {
                    'a' : 1
                }

                // Step 2:

                m1['n']++;
                m1 = {
                    'a' : 1,
                    'n' : 1
                }

                // Step 3:

                m1['a']++;
                m1 = {
                    'a' : 2,
                    'n' : 1
                }
            */
            for (char ch : s)
            {
                m1[ch]++;
            }
            for (char ch : t)
            {
                m2[ch]++;
            }

            return m1 == m2;
        }
    };

    return 0;
}