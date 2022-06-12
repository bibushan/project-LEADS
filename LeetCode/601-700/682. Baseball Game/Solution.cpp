class Solution {
public:
  int calPoints(vector<string> &ops) {
    vector<int> record;
    for (int i = 0; i < ops.size(); i++) {
      if (ops[i] == "+")
        record.push_back(record[record.size() - 2] + record.back());
      else if (ops[i] == "D")
        record.push_back(2 * record.back());
      else if (ops[i] == "C")
        record.pop_back();
      else
        record.push_back(stoi(ops[i]));
    }
    return accumulate(record.begin(), record.end(), 0);
  }
};