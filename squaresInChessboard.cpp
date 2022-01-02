//Observation: For n X n dimension we have 1 X 1 ie 1 square. for (n-1) X (n-1) we have 2 X 2 and so on...
// So we get the solution(total squares) as a series : 1^2 + 2^2 + 3^2 + ... + n^2.
// this can be generalized as (n)*(n+1)*(2n+1)/6
int solution(int n)
{
    return (n)*(n+1)*(2n+1)/6;
}
