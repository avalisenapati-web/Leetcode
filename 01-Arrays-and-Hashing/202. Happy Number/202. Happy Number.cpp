1class Solution {
2public:
3    int findsquare(int n){
4        int sum=0;
5        while(n>0){
6            int d=n%10;
7            sum+=d*d;
8            n/=10;
9        }
10        return sum;
11    }
12
13    bool isHappy(int n) {
14        int slow=n;
15        int fast=n;
16        while(true){
17         slow=findsquare(slow);
18         fast=findsquare(fast);
19         fast=findsquare(fast);
20         if(slow==fast){
21            break;
22         }
23
24    }
25
26    return slow == 1;
27
28        
29    }
30};