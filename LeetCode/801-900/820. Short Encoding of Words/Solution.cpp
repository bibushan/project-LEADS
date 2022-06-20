
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> s(words.begin(), words.end());
        for (auto word: words) {
            for (int i=1; i<word.size(); i++)
                s.erase(word.substr(i));
        }
        int n = 0;
        for (auto word: s)
            n += word.size() + 1;
        return n;
    }
};