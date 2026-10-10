class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int j=n-1;
        vector<int>res(n);

        while(left<=right)
        {
            int leftsquare=nums[left]*nums[left];
            int rightsquare=nums[right]*nums[right];

            if(leftsquare>=rightsquare){
                res[j]=leftsquare;
                j--;
                left++;
            }
            else
            {
            res[j]=rightsquare;
            j--;
            right--;
            }
        }
        return res;
    }
};