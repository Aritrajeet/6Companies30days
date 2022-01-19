//we use dfs to detect cycle. If cycle present then tasks cant be performed

vector<vector<int>> adj;
//detect cycle
bool dfs(int v,bool visited[],bool temp[]){
    visited[v]  =1;
    temp[v] = 1;
    for (int u : adj[v]){
        if(!visited[u]){
            if (dfs(u,visited,temp)){
                return 1;
            }
        }
        else if (temp[u] == 1)
            return 1;           //visiting same node in same stack call
    }
    temp[v] = 0;
    return 0;
}
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    adj.resize(N);
	    for (auto x:prerequisites){
	        adj[x.first].push_back(x.second);   //create an adjacency list for graph
	    }
	    bool visited[N];    
	    bool temp[N];       //visited in the same stack call
	    for (int i=0; i<N; i++){
	        visited[i] = false;
	        temp[i] = false;
	    }
	    for (int i=0; i<N; i++){
	        if (!visited[i]){
	            if (dfs(i,visited,temp)){
	                return 0;       //has cycle
	            }
	        }
	    }
	    return 1;       //no cycle
	}
