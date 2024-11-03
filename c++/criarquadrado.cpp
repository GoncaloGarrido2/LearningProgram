#include <iostream>
using namespace std;

int main()
{
  int largura=0, altura=0;

  cout << "Receber largura:";
  cin >> largura;
  cout << "Receber altura:";
  cin >> altura;

  //tampa
  cout << "+";
  for (int i = 0; i < largura-2; i++)
  {
    cout << "-";
  }
  cout << "+\n";


  for (int i = 0; i < altura - 2; i++)
  {
    cout << "|";
    for (int i = 0; i < largura - 2; i++)
    {
      cout << " ";
    }
    cout << "|\n";
  }

  cout << "+";
  for (int i = 0; i < largura - 2; i++)
  {
    cout << "-";
  }
  cout << "+\n";
}
