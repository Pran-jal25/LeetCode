class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      int n=nums.size();
      unordered_map<int,int>m;

      for(int i=0;i<n;i++)
      {
        // jo chahiye=target-current wala 
        // ex=9 chaiye to x=9-2 ie=7
        int need=target-nums[i];
        if(m.find(need)!=m.end())//if mil gaya to return krdo wo or uska index
        {
            return{m[need],i};
        }
        //or nhi mila to wo number or uska index future ke liye store krlo
        m[nums[i]]=i;
      }
      return {};
    } 
};