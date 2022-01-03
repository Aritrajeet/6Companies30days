//It is quite obvious that we cant operate 10M inputs. So, sorting is a bad idea.
//But there can be 2 methods to solve the problem depending on CONSTRAINTS.
//CASE1: If the numbers range from 0 to say 1000 (or so).In this case we can apply Counting Sort algoritm.
vector<int> max10(vector<int> arr)
{
  int c[1000];
  for (int i=0; i< arr.size(); i++
}
