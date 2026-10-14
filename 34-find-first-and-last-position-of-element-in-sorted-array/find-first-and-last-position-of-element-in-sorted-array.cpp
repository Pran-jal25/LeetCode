class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1,last=-1;
        int start=0,end=n-1;

        while(start<=end){
            int mid=start + (end-start)/2;

            if(nums[mid] < target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else // if mid==target then store it in first then search left side;
            {
            first=mid;
            end=mid-1;
            }
        }
            start=0,end=n-1;
            //it starts from beginning coz indexing bigd gai upr;
            while(start<=end){
            int mid=start + (end-start)/2;

            if(nums[mid] < target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else // if mid==target then store it in last then search right side;
            {
            last=mid;
            start=mid+1;
            }
        }
    return {first,last};
    }
};