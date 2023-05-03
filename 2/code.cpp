#include <iostream>

using namespace std;

int main()
{
  int atual = 1, anterior = 0, aux, k;

  cin >> k;

  if (k)
  {
    while(atual < k)
    {
      aux = atual + anterior;
      anterior = atual;
      atual = aux;
    }
  
    if (atual == k)
    {
      cout << k << " pertence a sequência de Fibonacci!" << endl;
    }
    else
    {
      cout << k << " não pertence a sequência de Fibonacci!" << endl;
    }
  }
  else
  {
    cout << k << " pertence a sequência de Fibonacci" << endl;
  }

  return 0;
}
