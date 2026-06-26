class Solution {
public:
    bool isValid(string s) {
        //code h
        stack < char>st;
        int n=s.size();

        for(int i=0;i<n;i++)
        {
            char ch=s[i];

            if(ch=='(' or ch=='{' or ch=='[')
            {
                st.push(ch); //stack me daldo
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
        // check kro closing bracket open se same h ya nhi;
                if((ch==')' && st.top()!='(') or
                    (ch=='}' && st.top()!='{') or                       (ch==']' && st.top()!='['))
                {
                    return false;
                }
                st.pop(); //or h to pop krdo
                
            }
        }
        return st.empty();
    }
};
