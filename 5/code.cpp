#include <iostream>

using namespace std;

int main()
{
  string s;
  char a;
  cin >> s;
  
  for (int i = 0, f = s.size(); i < f / 2; i++)
  {
    a = s[i];
    s[i] = s[f - i - 1];
    s[f - i - 1] = a;
  }

  cout << s << endl;
  
  return 0;
}
