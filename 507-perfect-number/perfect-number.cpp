class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Numbers less than or equal to 1 cannot be perfect numbers
        if (num <= 1) return false;
        
        int sum = 1; // Start with 1 because 1 is always a proper divisor
        
        // Loop up to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i; // Add the divisor
                
                // Add the paired divisor if it is different
                if (i * i != num) {
                    sum += num / i;
                }
            }
        }
        
        // Return true if the sum of divisors equals the original number
        return sum == num;
    }
};
