1class Solution {
2public:
3
4    long long totalhours(vector<int>& piles, int speed) {
5
6        long long totalhr = 0;
7
8        for (int banana : piles) {
9            totalhr += ceil((double)banana / speed);
10        }
11
12        return totalhr;
13    }
14
15    int minEatingSpeed(vector<int>& piles, int h) {
16
17        int high = piles[0];
18
19        for (int i = 1; i < piles.size(); i++) {
20            if (piles[i] > high)
21                high = piles[i];
22        }
23
24        int low = 1;
25        int ans = high;
26
27        while (low <= high) {
28
29            int mid = low + (high - low) / 2;
30
31            long long totalhr = totalhours(piles, mid);
32
33            if (totalhr <= h) {
34                ans = mid;
35                high = mid - 1;
36            }
37            else {
38                low = mid + 1;
39            }
40        }
41
42        return ans;
43    }
44};