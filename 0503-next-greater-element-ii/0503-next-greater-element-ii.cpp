class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //code here;
        stack<int>st;
        int n=nums.size();
        vector<int> res(n, -1);

        for(int i=n-2;i>=0;i--)
        {
            st.push(nums[i]); //last wale ko chance dena h to (n-1) se baki ko push krdo
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() and st.top()<=nums[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                res[i]=-1;
            }
            else
            {
                res[i]=st.top();
            }
            st.push(nums[i]);
        }
        return res;
    }
};
