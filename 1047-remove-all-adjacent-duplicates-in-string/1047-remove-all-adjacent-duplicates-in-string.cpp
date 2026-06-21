class Solution {
public:
    string removeDuplicates(string s) {
        //c
        stack<char>st;
        int n=s.size();
        string res;

        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            else if(st.top()==s[i])
            {
                st.pop();//isko dalo hi mt or iske same adjacent ko bhi hata do;
                continue;
            }
            //if upper both are not done then;
            else
            {
                st.push(s[i]); //kuch hai hi nhi to s[i]th element daldo;
            }
        }
        // now is stack ko res me store krdo
        while(!st.empty())
           {
               res.push_back(st.top());
               st.pop(); //res me store krdo or stack se hta do;
           }
        reverse(res.begin(),res.end());
        return res;
    }
};
