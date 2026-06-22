class Solution {
public:
    int findMin(vector<int>& nums) {
        //
        int n=nums.size();

        int start=0,end=n-1,mid,ans=nums[0];// if rotate hi n hua hoto 0th index wala hi min hoga

        while(start<=end)
        {
            mid=start + (end-start)/2;

            //left side sorted and "ans" is in right side;
            if(nums[mid]>=nums[0])
            start=mid+1;

            //right side sorted and "ans" is in left side
            else
            {
            ans=nums[mid]; //by chance yahi nikla to worst case ke liye pehel ise hi store krlia fir left me dekhlenge;
            end=mid-1;
            }
        }
        return ans;
    }
};
