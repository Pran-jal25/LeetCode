#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // This map stores: {running_sum, first_time_we_saw_it_index}
        unordered_map<int, int> sumMap;
        
        // If the sum becomes 0, it means everything from the start matches
        sumMap[0] = -1; 
        
        int maxLen = 0;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
        
            currentSum += (nums[i] == 0) ? -1 : 1;
            
            // If we have seen this exact sum before, 
            // the numbers in between must add up to 0!
            if (sumMap.count(currentSum)) {
                int currentLen = i - sumMap[currentSum];
                maxLen = max(maxLen, currentLen);
            } else {
                // First time seeing this sum, save the index
                sumMap[currentSum] = i;
            }
        }
        
        return maxLen;
    }
};
