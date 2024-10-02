#include <iostream>

using namespace std;

int main()
{

  int batas, i;

  cout << "Masukkan Angka : ";
  cin >> batas;

  cout << "Bilangan Genap :" << endl;
  for (i = 1; i <= batas; i++)
  {
      if (i % 2 == 0)
    {
    cout << i << " " << endl;
    }
  }
  cout << endl;
  cout << "Bilangan Ganjil :" << endl;
  for (i = 1; i <= batas; i++)
  {
      if (i % 2 == 1)
    {
        cout << i << " " << endl;
    }
  }

  cout << endl;
  return 0;
}
