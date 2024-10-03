#include <bits/stdc++.h>
using namespace std;
int main ()
{
  deque<int> dq = {10, 20, 39};
  dq.push_front(5);
  dq.push_back(50);
  for(auto x : dq)
  {
    cout << x << " ";

  }
  cout << dq.front() << " " << dq.back();
  return 0;  
}