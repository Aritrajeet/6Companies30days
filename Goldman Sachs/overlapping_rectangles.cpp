class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        int flag = true; // overlapping
        if (L1[0]>R2[0] || L2[0]>R1[0]) //for horizontal overlap
            flag = false;
        if (L1[1]<R2[1] || L2[1]<R1[1]) //for vertical overlap
            flag = false;
        return flag;
    }
};
