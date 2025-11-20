class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<vector<int>>graph(numCourses);
        vector<int>indegree(numCourses,0);
        for(vector<int>&ans:prerequisites){
            graph[ans[1]].push_back(ans[0]);
            indegree[ans[0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        int visited=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            visited++;
            for(int it:graph[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return visited==numCourses?true:false;
    }
};