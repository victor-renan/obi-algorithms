#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int contractions = 0;

  cin >> N;

  if (N >= 1 && N <= pow(10, 6))
  {
    long long L[N];

    for (int i = 1; i <= N; i++)
    {
      long long num;
      cin >> num;

      if (num >= 1 && num <= pow(10, 9))
      {
        L[i] = num;
      }
    }

    int start = 1, end = N;

    while (start < end)
    {
      if (L[start] == L[end])
      {
        start++;
        end--;
        continue;
      }

      if (L[start] > L[end])
      {
        L[end - 1] += L[end];
        end--;
        contractions++;
      }
      else
      {
        L[start + 1] += L[start];
        start++;
        contractions++;
      }
    }
  }
  cout << contractions;
}