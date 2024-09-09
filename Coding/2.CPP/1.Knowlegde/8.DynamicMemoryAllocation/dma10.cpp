//allocate memory dynamically for 2d array using malloc()
#include<iostream>
using namespace std;
main()
{
 int **p;
  int r,c,i,j;
  cout << "enter row and column" << endl;
  cin >> r >>c;
  /********** allocating memory **************/
  p=(int**)malloc(sizeof(int*)*r);
  for(i=0;i<3;i++)
   p[i]=(int*) malloc(sizeof(int)*c);

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
 free(p[i]);
 free(p);






}
