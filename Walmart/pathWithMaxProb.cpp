    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<vector<pair<int, double>>> v(n);
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]].emplace_back(edges[i][1], succProb[i]);
            v[edges[i][1]].emplace_back(edges[i][0], succProb[i]);
        }
        vector<double> dp(n, 0);
        queue<int> q;
        q.push(start);
        dp[start] = 1;
        while (!q.empty()){
            int curr = q.front();
            q.pop();
            for (auto child : v[curr]){
                double f = child.first;
                double s = child.second;
                if (dp[nxt] < dp[node] * s) dp[f] = dp[f] * p, q.push(f);
            }
        }
        return dp[end];
    }
