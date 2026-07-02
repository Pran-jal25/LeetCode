class Solution {
public:
    void reverseString(vector<char>& s) {
        //cod
        //USING STACK;
        stack<char>st;
        vector<char>res;
        int n=s.size();

        for(int i=0;i<n;i++)
        {
            st.push(s[i]); //push the given string into stack;
        }
        //now see the "top" element and store it in a res vector;
        while(!st.empty()) //this means when stack is not empty;
        {
            char c=st.top(); //see
            st.pop();  //see then delete;
            res.push_back(c);
        }
        // return res; it is a void fun so nothing is returned;

        //copy the reverse characters back into "s";
        for(int i=0;i<n;i++)
        {
            s[i]=res[i];
        }
    }
};
