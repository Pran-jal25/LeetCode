class Solution {
public:
    int search(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int start=0,end=n-1,mid;

        while(start<=end)
        {
            
            mid=start + (end-start)/2;

            // element founded
            if(arr[mid]==target)
            return mid;
            // left side sorted
            else if(arr[0]<=arr[mid])
            {
                if(arr[start]<=target && arr[mid]>target)//or left me hi hona h us element ko to ;
                end=mid-1;
                else
                start=mid+1;//right me hoga to ye condition
            }
            //right side sorted
            else
            {
            if(arr[mid]<target && arr[end]>=target)
            start=mid+1;
            else
            end=mid-1;
            }
        }
        return -1;
    }
};
