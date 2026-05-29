class Solution {
public:
    int mySqrt(int x) {
        //code here
        if(x<=1)
        return x;
        
        int start=0,end=x,mid,ans;

        while(start<=end)
        {
            mid=start+(end-start)/2;

            // if(mid*mid==x) //instead mid==x/mid for stopping error;
            if(mid==x/mid)
            return mid;

            else if(mid<x/mid)
            {
                ans=mid;
                start=mid+1;
            }
            else
            end=mid-1;
        }
        return ans;  
    }
};
