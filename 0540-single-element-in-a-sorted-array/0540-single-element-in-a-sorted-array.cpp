class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if (n == 1)
            return arr[0];

        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            // Corner cases
            if (mid == 0 && arr[0] != arr[1]) {
                return arr[mid];
            }
            if (mid == n - 1 && arr[n - 1] != arr[n - 2]) {
                return arr[n - 1];
            }

            if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }
            if (mid % 2 == 0) {
                if (arr[mid - 1] == arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (arr[mid - 1] == arr[mid]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return 0;
    }
};