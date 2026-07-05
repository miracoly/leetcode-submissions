class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> occurences;
        for (int n : nums) {
            if (occurences.count(n))
                return true;
            else
                occurences.insert(n);
        }
        return false;
    }
};
