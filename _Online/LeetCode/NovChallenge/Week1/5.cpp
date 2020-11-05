/*
Minimum Cost to Move Chips to The Same Position

We have n chips, where the position of the ith chip is position[i].

We need to move all the chips to the same position. In one step, we can change the position of the ith chip from position[i] to:

position[i] + 2 or position[i] - 2 with cost = 0.
position[i] + 1 or position[i] - 1 with cost = 1.
Return the minimum cost needed to move all the chips to the same position.

Input: position = [1,2,3]
Output: 1
Explanation: First step: Move the chip at position 3 to position 1 with cost = 0.
Second step: Move the chip at position 2 to position 1 with cost = 1.
Total cost is 1.


---------------------
     Soution
---------------------


class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        
        int even =0, odd=0;
        
        for(auto i : position){
            if(i%2==0)even++;
            else odd++;
        }
        if(position.size()==even || position.size()==odd) return 0;
        else
            return min(even,odd);
    }
};
*/