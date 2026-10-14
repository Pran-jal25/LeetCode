class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int start=0,end=n-1;

        while(start<=end){
            int mid= start + (end-start)/2;

            if(a[mid]==target){
                return mid;
            }
            if(a[start]<=a[mid]){// check which side is sorted so left side sorted;
            
            if(a[start]<=target && target<=a[mid]){
                // search left side
                end=mid-1;
            }
            else //search right side
            {
                start=mid+1;
            }

            }
            else{ //right side sorted;
            if(a[mid]<=target && target <=a[end]){
                //search right side;
                start=mid+1;
            }
            else{ // left side;
            end=mid-1;
            }

            }
        }
        return -1;
    }
};