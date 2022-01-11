	void matchPairs(char nuts[], char bolts[], int n) {
	    char arr[9] = {'!','#', '$' ,'%','&' ,'*','@' ,'^','~'};
	    vector<char> ans;
	    for (int i=0; i<9; i++){
	        for (int j=0; j<n; j++){
	            if (arr[i] == nuts[j]){
	                ans.push_back(arr[i]);
	                break;
	            }
	        }
	    }
	    sort(ans.begin(),ans.end());
	    for (int i=0; i<n; i++){
	        nuts[i] = ans[i];
	        bolts[i] = ans[i];
	    }
	}
