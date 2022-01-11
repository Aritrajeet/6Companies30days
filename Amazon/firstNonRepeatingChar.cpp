//We use queue to store and get the first non-repeating character
		string FirstNonRepeating(string A){
		    int arr[26] = {0};
		    string ans ;
		    queue<int>q;
		    for (int i=0; i<A.length(); i++){
		        arr[A[i]-'a']++;
		        if (arr[A[i]-'a'] == 1){
		            q.push(A[i]);
		        }
		        while(!q.empty() && arr[q.front()-'a'] != 1){
		            q.pop();
		        }
		        if (!q.empty()){
		            ans += q.front();
		        }
		        else {
		            ans += '#';
		        }
		    }
		    return ans;
		}
