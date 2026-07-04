class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size(); //m= colums
        //matrix[0] means the first row of the matrix.
        //(.size()) gives the number of elements in that row.
        int low=0,high=n*m-1;

        while(low<=high)
        {
            int mid=low + (high-low)/2;
            int row=mid/m; //index(in 1D array)/colums-> give row
            int col=mid%m; //index%col-> give colums;

            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return false;
    }
};