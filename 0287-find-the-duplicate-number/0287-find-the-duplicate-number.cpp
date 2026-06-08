class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //code here;
    int slow=nums[0];
    int fast=nums[0];

    //moving pointers
    while(true)
    {
        slow=nums[slow]; //move 1 step;
        fast=nums[fast]; //move 2 steps
        fast=nums[fast]; //move 2 steps

        if (slow==fast) break;
    } 
    //  find duplicate ie. starting point of linked list;
    slow=nums[0];
    while(slow!=fast)
    {
        slow=nums[slow]; //move 1 step;
        fast=nums[fast];  //move 1 step;
    }
    return slow;
    }
};
