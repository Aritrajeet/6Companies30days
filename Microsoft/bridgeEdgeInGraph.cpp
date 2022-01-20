//We perform dfs traversal of graph. We intentionally skip c -> d edge. If it is not a bridge , there will be some other vertex that reaches d. If not , c -> d is a bridge.   
int visited[100000];
   
   int dfs(int i, vector<int> adj[], int c, int d){
       
       visited[i] = 1;
       
       for(auto x : adj[i])
       {
           if(i == c && x == d) //skip c -> d edge
                continue;
           if(!visited[x]) 
                dfs(x, adj, c, d);
       }
       
       
       return 0; 
   }
   
   int isBridge(int V, vector<int> adj[], int c, int d) 
   {
       
       for(int i=0; i<V; i++) 
            visited[i] = 0;
       dfs(c, adj, c, d);
       return (!visited[d]);
       
   }
