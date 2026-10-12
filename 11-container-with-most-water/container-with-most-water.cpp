class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int max_water=0;

        while(left<=right)
        {
            int width=right-left;
            int ht=min(height[left],height[right]);
             int currentwater=width*ht;
            max_water=max(max_water,currentwater);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_water;
    }
};