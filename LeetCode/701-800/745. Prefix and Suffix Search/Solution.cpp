class WordFilter {
public:
  WordFilter(vector<string> &words) {
    int size = words.size();
    for (int k = 0; k < size; ++k) {
      string word = words[k];
      int len = word.length();
      for (int i = 0; i <= len; ++i) {
        string prefix = word.substr(0, i);
        for (int j = len; j >= 0; --j) {
          string key = prefix + "_" + word.substr(j, len);
          map_[key] = k;
        }
      }
    }
  }
  int f(string prefix, string suffix) {
    auto ptr = map_.find(prefix + "_" + suffix);
    if (ptr == map_.end())
      return -1;
    return ptr->second;
  }

private:
  unordered_map<string, int> map_;
};
/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */