class Solution {
public:
    int search(vector<int>& arr, int key) 
{
    int n=arr.size();
    int start=0,end=n-1;

    while(start<=end){
         // finding mid;
    
    // mid=(start+end)/2 ##this will give int flow error so use this instead;
        int mid=start + (end-start)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>=key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
};
