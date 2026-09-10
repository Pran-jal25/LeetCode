class Solution {
public:
    bool isPalindrome(int x) {
        //code her
        // Negative numbers are not palindrome
        if(x < 0)
            return false;

        int original = x;
        long long rev = 0;

        // Reverse the number
        while(x > 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        // Check if original and reversed are same
        return original == rev;
    }
};
