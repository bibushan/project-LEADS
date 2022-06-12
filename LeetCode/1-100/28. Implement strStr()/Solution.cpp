/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Implement strStr().
Memory Usage: 6.2 MB, less than 59.96% of C++ online submissions for Implement strStr().*/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
            return 0;
        if (haystack.size() < needle.size())
            return -1;
        return haystack.find(needle, 0);
    }
};