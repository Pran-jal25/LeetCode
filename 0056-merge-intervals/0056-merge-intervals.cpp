class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //co
        vector<vector<int>>res;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());

        int start=intervals[0][0];
        int end=intervals[0][1];

        for(int i=1;i<n;i++)
        {
            int s=intervals[i][0];
            int e=intervals[i][1];

            if(end>=s) //overlapping condition so (merge hoga);
            {
                start=start;
                end=max(end,e);
                continue;
            } 
    //if overlapping (merge) nhi hoga then simply push "i"th term in res;
            res.push_back({start,end});
            start=s;
            end=e;
        }
        res.push_back({start,end});
        return res;

    }
};
