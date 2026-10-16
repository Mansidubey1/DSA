class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low1 = 0;
        int high1 = matrix.size() - 1;

        while (low1 <= high1) {
            int mid1 = low1 + (high1 - low1) / 2;

            if (target < matrix[mid1][0]) {
                high1 = mid1 - 1;
            }
            else if (target > matrix[mid1].back()) {
                low1 = mid1 + 1;
            }
            else {
                int low = 0;
                int high = matrix[mid1].size() - 1;

                while (low <= high) {
                    int mid = low + (high - low) / 2;

                    if (matrix[mid1][mid] == target)
                        return true;
                    else if (matrix[mid1][mid] < target)
                        low = mid + 1;
                    else
                        high = mid - 1;
                }

                return false;
            }
        }

        return false;
    }
};