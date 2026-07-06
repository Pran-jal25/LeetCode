class Solution {
public:
    int search(vector<int>& arr, int key) 
{
    //code here
    int n=arr.size();
    // start,end,mid;
    int start=0,end=n-1,mid;

    while(start<=end)
    {
     
    // finding mid;
    
    // mid=(start+end)/2 ##this will give int flow error so use this instead;
    mid=start + (end-start)/2;

    if(arr[mid]==key)
    return mid;

    else if(arr[mid]<=key)
    start=mid+1;

    else
    { 
      end=mid-1;
    }
    }
    return -1;
}
};
