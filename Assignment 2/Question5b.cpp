#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the order of the Tridiagonal Matrix (n x n): ";
  cin >> n;
  int arr[3 * n - 2];
  cout << "Enter the non-zero elements of the Tridiagonal matrix (main, lower, upper): " << endl;
  for (int i = 0; i < (3 * n) - 2; i++)
  {
    cin >> arr[i];
  }
  cout << "The Tridiagonal Matrix is: " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        cout << arr[i] << " "; // main diagonal
      }
      else if (i == j + 1)
      {
        cout << arr[n + (i - 1)] << " "; // lower diagonal
      }
      else if (i == j - 1)
      {
        cout << arr[(2 * n - 1) + (i)] << " "; // upper diagonal
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
