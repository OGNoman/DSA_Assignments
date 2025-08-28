#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str, result;
  cout << "Enter a string: ";
  getline(cin, str);
  string vowels = "aeiouAEIOU";
  for (int i = 0; i < str.size(); i++)
  {
    bool isVowel = false;
    for (int j = 0; j < vowels.size(); j++)
    {
      if (str[i] == vowels[j])
      {
        isVowel = true;
        break;
      }
    }
    if (!isVowel)
    {
      result = result + str[i];
    }
  }
  cout << "String without vowels: " << result << endl;
  return 0;
}
