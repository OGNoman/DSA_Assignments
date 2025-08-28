#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the order of the Symmetric Matrix (n x n): ";
  cin >> n;
  int arr[(n * (n + 1)) / 2];
  cout << "Enter the elements of Symmetric matrix of only lower triangle (row-major order): ";
  for (int i = 0; i < (n * (n + 1)) / 2; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i >= j)
      {
        cout << arr[(i * (i + 1) / 2) + j] << " ";
      }
      else
      {
        cout << arr[(j * (j + 1) / 2) + i] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}