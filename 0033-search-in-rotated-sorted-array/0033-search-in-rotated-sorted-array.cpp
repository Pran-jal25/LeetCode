class Solution {
public:
    int search(vector<int>& a, int target) {

        int n = a.size();
        int low = 0, high = n - 1;

        while(low <= high)
        {
            int mid = low + (high-low)/2;

            if(a[mid] == target)
                return mid;

            // Part 1 : mid is in left sorted part
            if(a[mid] > a[n-1])
            {
                if(a[mid] < target)
                {
                    low = mid + 1;
                    continue;              
                }
                else
                {
                    if(a[0] > target)    
                        low = mid + 1;
                    else
                        high = mid - 1;

                    continue;
                }
            }
            // Part 2 : mid is in right sorted part
            else                         
            {
                if(a[mid] > target)
                {
                    high = mid - 1;
                }
                else
                {
                    if(a[n-1] < target)  
                        high = mid - 1;
                    else
                        low = mid + 1;
                }
            }
        }

        return -1;
    }
};