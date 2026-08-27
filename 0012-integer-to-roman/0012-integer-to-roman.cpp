#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        // Sorted in descending order
        vector<pair<int, string>> romanMapping = {
            {1000, "M"},  {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},   {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},    {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };
        
        string result = "";
        
        // Loop through each mapping item
        for (const auto& pair : romanMapping) {
    
            while (num >= pair.first) {
                result += pair.second;
                num -= pair.first;     
            }
        }
        
        return result;
    }
};
