class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k=k % n;

        reverse(nums.begin(),nums.end()); //complete reverse
        reverse(nums.begin(),nums.begin()+k);//half rotate hoga Lekin end/exclusive hota hai.
        reverse(nums.begin()+k,nums.end());//remaining wale reverse krdo kth index se 
    }
};