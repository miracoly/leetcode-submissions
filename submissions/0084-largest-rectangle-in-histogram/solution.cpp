
class Solution {
 public:
  int largestRectangleArea(vector<int>& heights) {
    if (heights.empty()) return 0;

    const auto n = static_cast<int>(heights.size());
    stack<int, vector<int>> history;
    int max_area{};
    for (int i{}; i < n; ++i) {
      const auto h_cur = heights[static_cast<size_t>(i)];

      if (history.empty() ||
          h_cur > heights[static_cast<size_t>(history.top())]) {
        history.push(i);
        continue;
      }

      while (!history.empty() &&
             heights[static_cast<size_t>(history.top())] >= h_cur) {
        const int h = heights[static_cast<size_t>(history.top())];
        history.pop();
        const int left = history.empty() ? -1 : history.top();
        const int w = i - left - 1;
        max_area = std::max(max_area, w * h);
      }
      history.push(i);
    }

    while (!history.empty() &&
           heights[static_cast<size_t>(history.top())] >= 0) {
      const int h = heights[static_cast<size_t>(history.top())];
      history.pop();
      const int left = history.empty() ? -1 : history.top();
      const int w = n - left - 1;
      max_area = std::max(max_area, w * h);
    }

    return max_area;
  }
};

