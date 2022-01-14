//first we add all steps until sum > D then find sum - D and subract it from sum.
    int minSteps(int D){
        int sum = 0;
        int i = 0;
        while(sum < D || (sum-D)%2 == 1){       //%2 so that we can sum - 2*i to get D
            sum += i++; 
        }
        
        return i-1;
    }
