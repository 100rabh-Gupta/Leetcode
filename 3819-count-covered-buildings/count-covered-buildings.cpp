class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, vector<int>> rowMap;
        unordered_map<int, vector<int>> colMap;

        // Group y's by x (rows) and x's by y (columns)
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            rowMap[x].push_back(y);
            colMap[y].push_back(x);
        }

        // Sort the coordinate lists
        for (auto &kv : rowMap) {
            sort(kv.second.begin(), kv.second.end());
        }
        for (auto &kv : colMap) {
            sort(kv.second.begin(), kv.second.end());
        }

        int ans = 0;
        for (auto &b : buildings) {
            int x = b[0], y = b[1];
            auto &yList = rowMap[x];
            auto &xList = colMap[y];

            // Check coverage condition
            if (yList.front() < y && y < yList.back() &&
                xList.front() < x && x < xList.back()) {
                ans++;
            }
        }
        return ans;
    }
};
