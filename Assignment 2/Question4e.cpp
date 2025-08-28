#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout << "Enter an uppercase character: ";
  cin >> ch;
  if (ch >= 'A' && ch <= 'Z')
  {
    char lower = ch + 32;
    cout << "Lowercase: " << lower << endl;
  }
  else
  {
    cout << "The entered character is not uppercase!" << endl;
  }
  return 0;
}
