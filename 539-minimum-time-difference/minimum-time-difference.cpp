class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //int for_hour, rev_hour, for_min, rev_min;
        int n = timePoints.size();
        int min_diff = 1e9;
        int t = 24*60;
        sort(timePoints.begin(), timePoints.end());

        for(int i=1; i<=n; i++) {
            if(i == n) {
                string s1 = timePoints[n-1];
                string s2 = timePoints[0];
                int time1 = stoi(s1.substr(0,2)) * 60 + stoi(s1.substr(3,2));
                int time2 = stoi(s2.substr(0,2)) * 60 + stoi(s2.substr(3,2));
                //cout<<stoi(s2.substr(0,4))<<endl;
                int for_diff = max(time1, time2) - min(time1, time2);
                int rev_diff = min(time1, time2) + (t - max(time1, time2));
                //cout<<time1<<" "<<time2<<endl;
                //cout<<for_diff<<" "<<rev_diff<<endl;

                min_diff = min(min_diff, min(for_diff, rev_diff));
                //cout<<min_diff<<endl;
                //cout<<i<<endl;
                continue;
            }

            string s1 = timePoints[i-1];
            string s2 = timePoints[i];
            int time1 = stoi(s1.substr(0,2)) * 60 + stoi(s1.substr(3,2));
            int time2 = stoi(s2.substr(0,2)) * 60 + stoi(s2.substr(3,2));
            //cout<<stoi(s2.substr(0,4))<<endl;
            int for_diff = max(time1, time2) - min(time1, time2);
            int rev_diff = min(time1, time2) + (t - max(time1, time2));
            //cout<<time1<<" "<<time2<<endl;
            //cout<<for_diff<<" "<<rev_diff<<endl;

            min_diff = min(min_diff, min(for_diff, rev_diff));
            //cout<<min_diff<<endl;
            //cout<<i<<endl;
        }

        return min_diff;
    }
};