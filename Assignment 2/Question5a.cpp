#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the order of the Diagonal matrix (n x n): ";
  cin >> n;
  int arr[n];
  cout << "Enter the non zero elements of the Diagonal matrix: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "The Diagonal matrix is: " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        cout << arr[i] << " ";
      }
      else
      {
        cout << 0 << " ";
      }
    }
    cout << endl;
  }
  return 0;
}