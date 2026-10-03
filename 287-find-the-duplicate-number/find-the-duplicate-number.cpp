class Solution {
public:
    int findDuplicate(vector<int>& nums) {

    int slow=nums[0];
    int fast=nums[0];

    // move kro pointers ko;
    while(true)
    {
        slow=nums[slow]; //move 1 step
        fast=nums[fast]; //fast ko 2 step bdhana h
        fast=nums[fast];
        
        if(slow==fast) break; //jese hi same point pe meet ho break krdo
    }
    //again slow ko starting point me le aao;
    slow=nums[0];
    while(slow!=fast) //jab tk same point pe nai ate ek-ek step bdhate jao;
    {
    slow=nums[slow];
    fast=nums[fast];
    }
    return slow;
    }
};