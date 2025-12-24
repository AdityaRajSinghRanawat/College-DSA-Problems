#include <iostream>
#include <algorithm>
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
            // Time Complexity: O(nlogn)   [due to sorting]

            sort(begin(s), end(s));
            sort(begin(t), end(t));
            // or
            // sort(s.begin(), s.end());
            // sort(t.begin(), t.end());

            return s == t;
        }
    };

    return 0;
}