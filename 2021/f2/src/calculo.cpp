#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int S, A, B;

  cin >> S >> A >> B;

  if (S >= 1 && S <= 36)
  {
    if (A >= 1 && A <= 10000 && B >= 1 && B <= 10000 && A <= B)
    {
      vector<int> nums;

      for (int i = A; i <= B; i++)
      {
        string numStr = to_string(i);
        int sumAlgs = 0;

        for (auto alg : numStr)
        {
          sumAlgs += int(alg - '0');
        }

        if (sumAlgs == S)
        {
          nums.push_back(sumAlgs);
        }
      }

      cout << nums.size();
    }
  }
}