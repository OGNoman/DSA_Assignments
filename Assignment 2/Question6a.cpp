#include <iostream>
using namespace std;
int main()
{
  int A[100][3];
  cout << "Enter Triplet Representation of matrix: " << endl;
  cin >> A[0][0] >> A[0][1] >> A[0][2];

  int r = A[0][0];
  int c = A[0][1];
  int nz = A[0][2];
  for (int i = 1; i <= nz; i++)
  {
    cin >> A[i][0] >> A[i][1] >> A[i][2];
  }
  int B[100][3];
  B[0][0] = c;
  B[0][1] = r;
  B[0][2] = nz;
  int k = 1;
  for (int i = 0; i < c; i++)
  {
    for (int j = 1; j <= nz; j++)
    {
      if (A[j][1] == i)
      {
        B[k][0] = A[j][1];
        B[k][1] = A[j][0];
        B[k][2] = A[j][2];
        k++;
      }
    }
  }
  cout << "\nTranspose in Triplet Form:\n";
  for (int i = 0; i <= nz; i++)
  {
    cout << B[i][0] << " " << B[i][1] << " " << B[i][2] << endl;
  }

  return 0;
}
