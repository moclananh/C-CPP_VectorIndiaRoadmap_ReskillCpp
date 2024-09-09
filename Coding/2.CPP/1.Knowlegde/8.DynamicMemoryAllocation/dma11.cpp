//allocate memory dynamically for 2d array using new opeartor
#include<iostream>
using namespace std;
main()
{
 int **p;
  int r,c,i,j;
  cout << "enter row and column" << endl;
  cin >> r >>c;
  /********** allocating memory **************/
  p=new int*[r];
  for(i=0;i<3;i++)
   p[i]=new int[c];

/************ scanning the data *************/
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
    cin >> p[i][j];
 }
/************* printing data **************/
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
  cout << p[i][j]<< " ";
  cout << endl;
}
/*********** de-allocate mmeory ********/
for(i=0;i<r;i++)
  delete [] p[i];

delete[]p;
}
