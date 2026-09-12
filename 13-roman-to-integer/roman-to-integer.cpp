class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int current = getValue(s[i]);
            
            // If the next character has a higher value, subtract current from sum
            if (i + 1 < s.size() && current < getValue(s[i + 1])) {
                sum -= current;
            } else {
                sum += current;
            }
        }
        
        return sum;
    }

private:
    // Helper function to map Roman characters to integers
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};
