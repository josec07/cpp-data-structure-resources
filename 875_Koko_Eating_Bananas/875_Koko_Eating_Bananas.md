### Intuition:


#### Output: Return Minimum K possible under H hours.


- k is the consumption rate of Koko eating bananas.
- the maximum kth value that satisfies the under H hours limit is the largest pile in piles.
- from this understanding we can run binary search on 1 to largest pile value.
- our answer for a minimum possible Kth value is in range of 1 to largest pile value.


##### Ex: [3,6,7,11] 11 is max, so minimum K is between 1 to 11.

- we now simplified our scope to search only 11 values.


### Our approach:


Use a while loop to run binary search on 1 to largest pile value.


- our left pointer represents our starting range.
- our right pointer represents our end range.
- our middle pointer k is the consumption rate.
- at each interval in binary search we run an O of N addition algorithm to get total Hours consumed at the Kth consumption rate.
- we return a result of total Hours consumed, to check against our hours constraint.
- we then check the current minK against our current Kth value.


Return the small Kth value that satisfies the Hours constraint.


```cpp
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int mx = *max_element(piles.begin(), piles.end());

        int l = 1;
        int r = mx;
        int minK = mx;


        while(l <= r){
            int k = l + (r-l)/2;
            long totalH = 0;

            for(int i = 0; i < piles.size();i++){
                totalH += (piles[i] + k - 1) / k;
            }
            
            if(totalH <= h){
                if(k < minK){
                    minK = k;
                }
                r = k - 1;
            }
            else{
                l = k + 1;
            }
        }

        return minK;
    }
};
```