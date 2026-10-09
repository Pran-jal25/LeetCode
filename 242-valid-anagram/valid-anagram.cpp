class Solution {
public:
    bool isAnagram(string s, string t) {
    int n=s.size();
    unordered_map<char,int>m1;
    unordered_map<char,int>m2;
    
    if(s.size()!=t.size()){
        return false;
    }
    for(int i=0;i<n;i++)
    {
        m1[s[i]]++;
        m2[t[i]]++;
    }
    if(m1==m2){
        return true;
    }
    return false;
    }

};