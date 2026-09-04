class Solution {
public:
    int reverse(int x) {
        //code here
        int reversed = 0;
        
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            
            // Check for overflow before multiplying by 10
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && pop > 7)) return 0;
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && pop < -8)) return 0;
            
            reversed = reversed * 10 + pop;
        }
        
        return reversed;
    }
};
