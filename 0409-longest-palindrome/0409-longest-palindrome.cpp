class Solution {
public:
    int longestPalindrome(string s) {
        //code here
        
        vector<int> lower(26,0);//initialize with 0.
        vector<int> upper(26,0);

        //frequency update;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a')
            lower[s[i]-'a']++;

            else
            upper[s[i]-'A']++;
        }

        int count=0; //total string size ie=ans h ye
        bool odd=0; //odd ke count rkhega ye last me ye add krdnege agr  hoga to.

        //odd even dekhkr count me add krenge;

        //for lower
        for(int i=0;i<26;i++)
        {
            if(lower[i]%2==0)
            count+=lower[i]; //agr even h to direct add krdo

            else
            {count+=lower[i]-1; //agr odd h to ek minus krke even bnado fir add krdo
            odd=1;
            }

        // for upper
         if(upper[i]%2==0)
            count+=upper[i]; //agr even h to direct add krdo

            else
            {count+=upper[i]-1; //agr odd h to ek minus krke even bnado fir add krdo
            odd=1;
            }
        }
        return count+odd;
    }
};