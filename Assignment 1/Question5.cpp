#include <iostream>
using namespace std;
int main()
{
  int r, c;
  cout << "Enter the number of rows: ";
  cin >> r;
  cout << "Enter the number of columns: ";
  cin >> c;
  int arr[r][c];
  cout << "Enter elements of the " << r << "x" << c << " array" << endl;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << endl;
  cout << "Sum of every row is:" << endl;
  for (int i = 0; i < r; i++)
  {
    int rowSum = 0;
    for (int j = 0; j < c; j++)
    {
      rowSum = rowSum + arr[i][j];
    }
    cout << "Row " << i + 1 << ": " << rowSum << endl;
  }
  cout << "Sum of each column:" << endl;
  for (int j = 0; j < c; j++)
  {
    int colSum = 0;
    for (int i = 0; i < r; i++)
    {
      colSum = colSum + arr[i][j];
    }
    cout << "Column " << j + 1 << ": " << colSum << endl;
  }
  return 0;
}