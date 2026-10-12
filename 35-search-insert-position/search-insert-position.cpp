class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;

        while(start<=end)
        {   
           int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            start=mid+1;
            
            else
            { 
                end=mid-1;     
            }
        
        }
        // When the target is not found, binary search ends with start just after end.
        return start; //or end+1
        
    }
};