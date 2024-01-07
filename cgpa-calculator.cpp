#include <bits/stdc++.h>
using namespace std;

int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n, i = 0;
  double credit = 0, cgpa = 0, temp = 0, credit_cnt = 0;
         
  cout << "Total course/s : " << endl;
  cin >> n;
         
  vector<double> v;
  
  while(n--) 
  {
    i++;
    cout << "Enter your course " << i << " cgpa & credit : " << endl;
    cin >> cgpa >> credit;
    
    credit_cnt += credit;
    temp = credit * cgpa;
    v.push_back(temp);
  }
    
  double sum = 0;
  for(int i = 0; i < v.size(); i++) 
     sum += v[i];
 
  double result = sum / credit_cnt;
  
  cout << endl << "Your total cgpa is " << fixed << setprecision(2) << result
       << endl << "Don't stop until you're 1% \\(^o^)/" << endl;
  
  return 0;
}