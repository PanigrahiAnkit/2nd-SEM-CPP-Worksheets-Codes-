//WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix.
//The formula that we are going to use here -----> [b+x {(r-lr) + (c-lc)}]    where r=No. of rows;  b=base address; c= No. of columns;  x= size of the variable (int, float,etc.) 

#include<iostream>
using namespace std;

int main()
{
   int b,i,j,w,lr=0,lc=0,n,m;
   int a[10][10];
   cout<<"\n\nEnter the no. of rows in matrix: "<<endl;
   cin>>m;
   cout<<"Enter no. of columns in matrix: "<<endl;
   cin>>n;
   cout<<"Enter the elements in matrix: "<<endl;
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         cin>>a[i][j];
      }
   }
   cout<<"Enter the base address: "<<endl;
   cin>>b;
   cout<<"Enter the storage size of one element stored in array: "<<endl;
   cin>>w;
   i=m-1;
   j=n-1;
   cout<<"Adress of A[i][j]: "<<b + w*(n*(i-lr)+(j-lc));
   return 0;
}
