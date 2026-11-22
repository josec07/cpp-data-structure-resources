class Solution {
public:
    int climbStairs(int n) {
        int one = 1, two = 1; //base cases
        for(int i = 0; i < n - 1; i++){
            int temp = one; //# of paths computed in last step, (one = 1 || one = one + two)
            one = one + two; //# of paths + paths from last two steps,  (one = 1 || one = one + two) + (two = 1 || two steps ago)
            two = temp; //represents last step, once i adds one, it becomes two steps ago
        }

        return one; //this represents one from current state
    }
};
