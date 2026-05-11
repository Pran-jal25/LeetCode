class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int bestending_max=nums[0],bestending_min=nums[0],res=nums[0];
        int maxsum=nums[0],minsum=nums[0];
        for(int i=1;i<n;i++)
        {
            int v1=nums[i];
            int v2=bestending_max + nums[i];
            int v3=bestending_min + nums[i];

            bestending_max=max(v1,v2);
            bestending_min=min(v1,v3);

            maxsum=max(maxsum,bestending_max);
            minsum=min(minsum,bestending_min);

        }
        return max(maxsum,abs(minsum));
    }
};