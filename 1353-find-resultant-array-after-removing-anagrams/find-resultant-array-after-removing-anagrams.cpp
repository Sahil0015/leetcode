class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>answer;
        answer.push_back(words[0]);
        int n=words.size();
        for(int i=1;i<n;i++){
            string s1=words[i];
            string s2=words[i-1];
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1!=s2){
              answer.push_back(words[i]);
            }
        }
        return answer;
    }
};