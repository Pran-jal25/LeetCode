class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int i=0,j=1;
        
        for(int j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;//pta chl gaya ki i or j pe alg alg value h to pehle i ko bdha denge or j ki vlaue dal denge;
                nums[i]=nums[j];
            }
        }
    
    return i+1;
    }
};