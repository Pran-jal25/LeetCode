class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        int sum=0,left=0,right=0;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }

        for(int i=0;i<n;i++)
        {
            //right sum;
            right=sum-nums[i]-left;

            if(left==right)
            {
                return i;
            }
            // update left
            left+=nums[i];
        }

        return -1;
    }
};
