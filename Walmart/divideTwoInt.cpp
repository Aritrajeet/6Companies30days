    int divide(int dividend, int divisor) {
        int count = 0;
        if(dividend==0) return 0;
        while(dividend > divisor){
            dividend -= divisor;
            count++;
        }
        return count;
    }
