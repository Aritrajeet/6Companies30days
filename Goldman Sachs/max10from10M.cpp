//It is quite obvious that we cant operate 10M inputs. So, sorting is a bad idea.
//But there can be 2 methods to solve the problem depending on CONSTRAINTS.
//CASE1: If the numbers range from 0 to say 1000 (or so).In this case we can apply Counting Sort algoritm.
vector<int> max10(vector<int> arr)
{
  vector<int> ans;
  int c[1000];
  for (int i=0; i< arr.size(); i++){
    c[arr[i]]++;
  }
  int count=0;
  for (int i=1000;i>=0;i--){
    count+=c[i];
     for (int j=0; j<count%10; j++)
      {
        ans.push_back(i);
      }
    if (count>=10) break;
  }
  return ans;
}

//CASE 2: Numbers are large i.e. 0 > n > 10^5 or bigger. We use heap of size 10. Put first 10 numbers into the heap. Then compare all elements always replacing the minimum element
       // with the greater one. This way at the end we have max 10 numbers in the heap. 
vector<int> max10(vector<int> arr)
{
  vector <int> s;
  for (int i=0; i<10; i++){
    s.push_back(arr[i]);
  }
  sort(s.begin(),s.end());
  for (int i= 10; i<arr.size(); i++){
    if (arr[i] > s[0])
    {
      swap(arr[i],s[0]);
    }
  }
  return s;
}
