#include <iostream>
#include <string>
using namespace std;
char toLower(char c)
{
  if (c >= 'A' && c <= 'Z')
  {
    return c + 32;
  }
  else
  {
    return c;
  }
}
int main()
{
  string str;
  cout << "Enter a string: ";
  getline(cin, str);
  int n = str.size();
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (toLower(str[j]) > toLower(str[j + 1]))
      {
        char temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }
  cout << "String in alphabetical order: " << str << endl;
  return 0;
}
