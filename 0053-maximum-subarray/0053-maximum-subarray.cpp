class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    //cod
        int n=arr.size();

        int ans=arr[0];
        int bestending=arr[0];

        for(int i=1;i<n;i++) //arr[0] to already h so arr[1] se chalu kro
        {
            int v1=bestending+arr[i]; //pehle wala + abhi wala index;
            int v2=arr[i]; //abhi jispe h "i" wo wala index;

            bestending=max(v1,v2);//dono me se bada ans jiska hoga
            ans=max(ans,bestending);
        }
        return ans;
    }
};
