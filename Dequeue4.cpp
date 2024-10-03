#include <bits/stdc++.h>
using namespace std;
int main ()
{
  deque<int> d;
  d.push_back(20);
  d.push_back(40);
  d.push_back(30);
  deque<int>::iterator itr = d.begin();
  ++itr;
  d.insert(itr, 90);
  for (int i = 0; i < d.size();i++)
  {
    cout << d[i] << " ";

  }
   return 0;
}