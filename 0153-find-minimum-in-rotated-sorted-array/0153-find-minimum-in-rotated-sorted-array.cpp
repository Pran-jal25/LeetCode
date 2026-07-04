class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        int first=-1,last=-1,res=-1;
        int low=0,high=n-1,mid;

        while(low<=high)
        {
            mid=low+(high-low)/2;

            if(nums[mid]>nums[n-1]) //second part h
            {
                low=mid+1;
            }

            else//first part h
            {
                res=nums[mid]; //min h to store krlo or left me dekhlo
                high=mid-1;
            }
        }
        return res;
    }
};