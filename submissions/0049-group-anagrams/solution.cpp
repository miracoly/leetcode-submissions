
class Solution {
 public:
  vector<vector<string>> groupAnagrams(const vector<string>& strs) {
    vector<pair<string, string>> sorted;
    sorted.reserve(strs.size());
    for (auto& str : strs) {
      sorted.emplace_back(str, str);
    }
    for (auto& str : sorted) {
      sort(str.second.begin(), str.second.end());
    }
    sort(sorted.begin(), sorted.end(),
         [](const auto& a, const auto& b) { return a.second < b.second; });

    vector<vector<string>> res{};
    for (size_t i = 0; i < sorted.size(); ++i) {
      const auto& curr_alpha = sorted[i].second;
      const auto& original = sorted[i].first;
      if (i == 0 || curr_alpha != sorted[i - 1].second) {
        res.emplace_back();
      }
      res.back().push_back(original);
    }

    return res;
  }
};

