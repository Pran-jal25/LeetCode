class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int bestmax=nums[0],maxres=nums[0];

        int bestmin=nums[0],minres=nums[0];

        int sum=nums[0];

        for(int i=1;i<n;i++)
        {
            sum+=nums[i];

            int v1=nums[i];
            int v2=bestmax + nums[i];
            int v3=bestmin + nums[i];

            bestmax=max(v1,v2);
            maxres=max(maxres,bestmax);

            bestmin=min(v1,v3);
            minres=min(minres,bestmin);
        }
          //if all negative case;
            if(maxres<0)
            {
            return maxres;           
            }
            
        return max(maxres,sum-minres);
    }
};