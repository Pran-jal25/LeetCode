class Solution {
public:
    string reverseWords(string s) {
        //code here;
        stringstream ss(s);
        string word;
        string result = "";
        
        // Read each word one by one
        while (ss >> word) {
            if (result == "") {
                result = word; // First word doesn't need a space
            } else {
                result = word + " " + result; // Put new word at the FRONT
            }
        }
        
        return result;
    }
};
