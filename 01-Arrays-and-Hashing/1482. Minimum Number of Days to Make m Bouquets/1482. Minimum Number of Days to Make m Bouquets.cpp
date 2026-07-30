1class Solution {
2public:
3    bool possible(vector<int>& bloomDay,int day,int m,int k){
4        int count=0;
5        int bouquet=0;
6        for(int bloom:bloomDay){
7            if(bloom<=day){
8                count++;
9            }else{
10                count=0;
11            }
12            if(count==k){
13                bouquet++;
14                count=0;
15            }
16        }
17        return bouquet>=m;
18    }
19    int minDays(vector<int>& bloomDay, int m, int k) {
20
21        int total=1ll*m*k;
22        if(total>bloomDay.size()){
23            return -1;
24        }
25        int high=*max_element(bloomDay.begin(),bloomDay.end());
26        int low=*min_element(bloomDay.begin(),bloomDay.end());
27
28        while(low<=high){
29            int mid=low+(high-low)/2;
30
31            if(possible(bloomDay,mid,m,k)){
32                high=mid-1;
33            }else{
34                low=mid+1;
35            }
36        }
37        return low;
38    }
39};