class Solution {
public:
    bool isPalindrome(string s) {
        //co
        int left = 0;
        int right = s.length() - 1;

        while(left < right) {

            // Skip non-alphanumeric characters
            while(left < right && !isalnum(s[left]))
                left++;

            while(left < right && !isalnum(s[right]))
                right--;

            // Convert to lowercase and compare
            if(tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};
