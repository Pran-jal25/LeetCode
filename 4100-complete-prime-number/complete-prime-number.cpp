#include <string>
#include <iostream>

class Solution {
public:
    //helper function 
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    bool completePrime(int num) {
        // Convert the entire number to a string
        std::string s = std::to_string(num);
        int len = s.length();

        // Check all prefixes (from left to right)
        for (int i = 1; i <= len; i++) {
            int prefix = std::stoi(s.substr(0, i));
            if (!isPrime(prefix)) return false;
        }

        // check all suffixes (from right to left)
        for (int i = 0; i < len; i++) {
            int suffix = std::stoi(s.substr(i));
            if (!isPrime(suffix)) return false;
        }

        return true;
    }
};
