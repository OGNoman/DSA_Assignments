#include <iostream>
#include <string>
using namespace std;
void reverseString(string &str)
{
  int n = str.size();
  int start = 0;
  int end = n - 1;
  while (start < end)
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
}
int main()
{
  string str;
  cout << "Enter a string: ";
  getline(cin, str);
  reverseString(str);
  cout << "Reversed String: " << str;
  return 0;
}
