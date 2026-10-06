class Solution {
public:
    int arrangeCoins(int n) {

        int left = 0;
        int right = n;
        int ans = 0;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            long long coins = 1LL * mid * (mid + 1) / 2;

            if (coins <= n) {
                // mid rows can be completed
                ans = mid;

                // try to make more rows
                left = mid + 1;
            }
            else {
                // mid rows cannot be completed
                // so try fewer rows
                right = mid - 1;
            }
        }

        return ans;
    }
};