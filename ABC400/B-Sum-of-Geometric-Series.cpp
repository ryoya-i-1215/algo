#include <iostream>
using namespace std;

int main()
{
  long long N;
  int M;
  cin >> N >> M;

  long long term = 1;
  long long sum = 0;
  const long long LIMIT = 1e9;

  for (int i = 0; i <= M; ++i)
  {
    if (sum > LIMIT)
    {
      cout << "inf" << endl;
      return 0;
    }
    sum += term;
    if (sum > LIMIT)
    {
      cout << "inf" << endl;
      return 0;
    }

    if (i != M)
    {
      if (term > LIMIT / N)
      {
        cout << "inf" << endl;
        return 0;
      }
      term *= N;
    }
  }

  if (sum > LIMIT)
  {
    cout << "inf" << endl;
  }
  else
  {
    cout << sum << endl;
  }

  return 0;
}
