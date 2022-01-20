//we use topological sort algo to get the order of letters. 
void topological(vector<int> adj[],string &s, vector<int> &vis,int node) {
	    vis[node] = 1;
	    for(auto it:adj[node]){
	        if(!vis[it]) {
	            topological(adj,s,vis,it);
	        }
	    }
	    s.push_back(node+'a');
	}
    string findOrder(string dict[], int N, int K) {
       vector<int> adj[K];
       vector<int> ans;
       for(int i = 0;i < N-1;i++){
           int mins = min(dict[i].length(),dict[i+1].length());
           for(int j = 0;j < mins;j++){
               if(dict[i][j] != dict[i+1][j]){
                   adj[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                   break;
               }
           }
       }
       string s = "";
       vector<int> vis(K,0);
       for(int i = 0;i < K;i++){
           if(!vis[i]){
               topological(adj,s,vis,i);
           }
       }
       reverse(s.begin(),s.end());
       return s;
    }
