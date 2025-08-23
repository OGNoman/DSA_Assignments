#include <iostream>
using namespace std;
void reverseArray()
{
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[100];
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int start = 0, end = n - 1;
  int temp = 0;
  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  cout << "Reversed Array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void matrixMultiplication()
{
  int r1, c1, r2, c2;
  cout << "Enter rows and cols of first matrix: ";
  cin >> r1 >> c1;
  cout << "Enter rows and cols of second matrix: ";
  cin >> r2 >> c2;
  if (c1 != r2)
  {
    cout << "Matrix multiplication not possible!" << endl;
    return;
  }
  int A[r1][c1], B[r2][c2], res[r1][c2];
  cout << "Enter first matrix:\n";
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c1; j++)
    {
      cin >> A[i][j];
    }
  }
  cout << "Enter second matrix:\n";
  for (int i = 0; i < r2; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cin >> B[i][j];
    }
  }
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      res[i][j] = 0;
      for (int k = 0; k < c1; k++)
      {
        res[i][j] = res[i][j] + (A[i][k] * B[k][j]);
      }
    }
  }
  cout << "Resultant Matrix:\n";
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }
}
void transposeMatrix()
{
  int r, c;
  cout << "Enter rows and cols: ";
  cin >> r >> c;
  int A[10][10], T[10][10];
  cout << "Enter matrix:\n";
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> A[i][j];
    }
  }
  cout << "Transpose Matrix:\n";
  for (int i = 0; i < c; i++)
  {
    for (int j = 0; j < r; j++)
    {
      cout << A[j][i] << " ";
    }
    cout << endl;
  }
}
int main()
{
  int choice;
  cout << "\n=== MENU ===\n";
  cout << "1. Reverse Array\n";
  cout << "2. Matrix Multiplication\n";
  cout << "3. Transpose of Matrix\n";
  cout << "Enter choice: ";
  cin >> choice;
  switch (choice)
  {
  case 1:
    reverseArray();
    break;
  case 2:
    matrixMultiplication();
    break;
  case 3:
    transposeMatrix();
    break;
  default:
    cout << "Invalid choice!\n";
  }
  return 0;
}
