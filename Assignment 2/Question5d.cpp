#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the order of the Upper Triangular Matrix (n x n): ";
  cin >> n;
  int arr[n * (n + 1) / 2];
  cout << "Enter the non-zero elements of the upper triangular matrix in row-major order: ";
  for (int i = 0; i < n * (n + 1) / 2; i++)
  {
    cin >> arr[i];
  }
  cout << "The Upper Triangular Matrix is: " << endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i <= j)
      {
        cout << arr[(i * (2 * n - i - 1) / 2) + j] << " ";
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
