class Solution {
public:
    void sortColors(vector<int>& nums) {
        //code 
        int n=nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else //2 wala case;
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
