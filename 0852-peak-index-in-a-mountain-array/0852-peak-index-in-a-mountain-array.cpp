class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        //code here
        int n=nums.size();
        int first=-1;
        int low=0,high=n-1,res=-1;

        while(low<=high)
        {
            int mid=low + (high-low)/2;
            //find first;
            if(nums[mid]<nums[mid+1]) //chadhai 
            {
                low=mid+1;;
            } 
            else //first dhalan ie. peak;
            {
                first=mid;
                high=mid-1; //search left part;
            }
        }
        return {first};
    }
};