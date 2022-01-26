//compare dist using 3 for loops    
int dist(vector<int> a, vector<int> b){
        return sqrt(pow(a[0] - b[0] ,2) + pow(a[1] - b[1],2));
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n= points.size(); 
        if (n<3)
            return 0;
        int ans = 0;
        for (int i=0; i<n; i++){
            for (int j = 0; j<n; j++){
                if (i==j) continue;
                int d1 = dist(points[i],points[j]);
                for (int k = 0; k<n; k++){
                    if(i==k || j==k) continue;
                    int d2 = dist(points[i],points[k]);
                    if (d1 == d2){
                        ans ++;
                    }
                }
            }
        }
        return ans;
    }
