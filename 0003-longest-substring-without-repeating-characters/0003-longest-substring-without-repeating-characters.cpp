class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //here
        vector<bool> count(256,0);
        int n=s.size();
        int first=0,second=0,len=0;

        while(second<n){
            while(count[s[second]]) //for repeating character:
            {
                count[s[first]]=0; //jab second wala repeat ho first wale se then first wale ko first krdo or increase krdo:
                first++;
            }
            count[s[second]]=1;
            len=max(len,second-first+1);
            second++;
        }
        return len;

    }
};
