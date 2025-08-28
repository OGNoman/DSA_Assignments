#include <iostream>
using namespace std;

void transpose(int arr[][3], int transpose[][3])
{
  int rows = arr[0][0];
  int cols = arr[0][1];
  int nonZero = arr[0][2];

  transpose[0][0] = cols;
  transpose[0][1] = rows;
  transpose[0][2] = nonZero;

  int k = 1;
  for (int i = 0; i < cols; i++)
  {
    for (int j = 1; j <= nonZero; j++)
    {
      if (arr[j][1] == i)
      {
        transpose[k][0] = arr[j][1];
        transpose[k][1] = arr[j][0];
        transpose[k][2] = arr[j][2];
        k++;
      }
    }
  }
}

void multiply(int A[][3], int B_T[][3], int C[][3])
{
  int temp[200][3];
  int k = 1;

  for (int i = 1; i <= A[0][2]; i++)
  {
    for (int j = 1; j <= B_T[0][2]; j++)
    {
      if (A[i][1] == B_T[j][1])
      {
        temp[k][0] = A[i][0];
        temp[k][1] = B_T[j][0];
        temp[k][2] = A[i][2] * B_T[j][2];
        k++;
      }
    }
  }

  int l = 1;
  for (int i = 1; i < k; i++)
  {
    if (temp[i][2] == 0)
      continue;
    int r = temp[i][0], c = temp[i][1], sum = temp[i][2];
    for (int j = i + 1; j < k; j++)
    {
      if (temp[j][0] == r && temp[j][1] == c)
      {
        sum += temp[j][2];
        temp[j][2] = 0;
      }
    }
    if (sum != 0)
    {
      C[l][0] = r;
      C[l][1] = c;
      C[l][2] = sum;
      l++;
    }
  }

  C[0][0] = A[0][0];
  C[0][1] = B_T[0][0];
  C[0][2] = l - 1;
}

int main()
{
  int A[100][3], B[100][3], B_T[100][3], C[200][3];

  cout << "Enter the first matrix in triplet representation:" << endl;
  cin >> A[0][0] >> A[0][1] >> A[0][2];
  for (int i = 1; i <= A[0][2]; i++)
  {
    cin >> A[i][0] >> A[i][1] >> A[i][2];
  }

  cout << "Enter the second matrix in triplet form:" << endl;
  cin >> B[0][0] >> B[0][1] >> B[0][2];
  for (int i = 1; i <= B[0][2]; i++)
  {
    cin >> B[i][0] >> B[i][1] >> B[i][2];
  }

  transpose(B, B_T);
  multiply(A, B_T, C);

  cout << "\nResultant triplet matrix:\n";
  for (int i = 0; i <= C[0][2]; i++)
  {
    cout << C[i][0] << " "
         << C[i][1] << " "
         << C[i][2] << endl;
  }
  return 0;
}
