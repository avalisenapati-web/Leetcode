1class Solution {
2public:
3    bool lemonadeChange(vector<int>& bills) {
4        int five = 0;
5        int ten = 0;
6
7        for (int bill : bills) {
8
9            if (bill == 5) {
10                five++;
11            }
12            else if (bill == 10) {
13                if (five == 0)
14                    return false;
15
16                five--;
17                ten++;
18            }
19            else {
20                if (ten > 0 && five > 0) {
21                    ten--;
22                    five--;
23                }
24                else if (five >= 3) {
25                    five -= 3;
26                }
27                else {
28                    return false;
29                }
30            }
31        }
32
33        return true;
34    }
35};