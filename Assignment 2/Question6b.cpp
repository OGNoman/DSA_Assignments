#include <iostream>
using namespace std;
int main()
{
  int A[100][3], B[100][3], C[200][3];
  cout << "Enter Triplet Representation of Matrix A:" << endl;
  cin >> A[0][0] >> A[0][1] >> A[0][2];
  int r1 = A[0][0], c1 = A[0][1], nz1 = A[0][2];

  for (int i = 1; i <= nz1; i++)
  {
    cin >> A[i][0] >> A[i][1] >> A[i][2];
  }

  cout << "Enter Triplet Representation of Matrix B :" << endl;
  cin >> B[0][0] >> B[0][1] >> B[0][2];
  int r2 = B[0][0], c2 = B[0][1], nz2 = B[0][2];

  for (int i = 1; i <= nz2; i++)
  {
    cin >> B[i][0] >> B[i][1] >> B[i][2];
  }
  C[0][0] = r1;
  C[0][1] = c1;
  int i = 1, j = 1, k = 1;

  while (i <= nz1 && j <= nz2)
  {
    if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1]))
    {
      C[k][0] = A[i][0];
      C[k][1] = A[i][1];
      C[k][2] = A[i][2];
      i++;
    }
    else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1]))
    {
      C[k][0] = B[j][0];
      C[k][1] = B[j][1];
      C[k][2] = B[j][2];
      j++;
    }
    else
    {
      int sum = A[i][2] + B[j][2];
      if (sum != 0)
      {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = sum;
      }
      else
      {
        k--;
      }
      i++;
      j++;
    }
    k++;
  }
  while (i <= nz1)
  {
    C[k][0] = A[i][0];
    C[k][1] = A[i][1];
    C[k][2] = A[i][2];
    i++;
    k++;
  }
  while (j <= nz2)
  {
    C[k][0] = B[j][0];
    C[k][1] = B[j][1];
    C[k][2] = B[j][2];
    j++;
    k++;
  }

  C[0][2] = k - 1;
  cout << "\nResultant Matrix (A + B) in Triplet Form:\n";
  for (int x = 0; x <= C[0][2]; x++)
  {
    cout << C[x][0] << " " << C[x][1] << " " << C[x][2] << endl;
  }
  return 0;
}
