#include <iostream>
#define MROWS 20
#define MCOLS 20
using namespace std;

class Matrix 
{
    public:
    int arr[MROWS][MCOLS];
    int rows, cols;

    Matrix()
    {
        rows = cols = 2;
    }
    Matrix(int r, int c, int mat[MROWS][MCOLS]) 
    {
        rows = r;
        cols = c;
        for (int i = 0; i< rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                arr[i][j] = mat[i][j];
            }
        }
    }
    void display() 
    {
        for (int i = 0; i< rows; i++) 
        {
            cout<< " [ ";
            for (int j = 0; j < cols; j++) 
            {
                cout<<arr[i][j] << ", ";
            }
            cout<< "]" <<endl;
        }
        cout<<endl;
    }
    Matrix operator+(Matrix x) 
    {
        if (x.rows != rows || x.cols != cols || (rows == 0 && cols == 0)) 
        {
            return Matrix();
        }

        int mat[MROWS][MCOLS];
        for (int i = 0; i< rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                mat[i][j] = arr[i][j] + x.arr[i][j];
            }
        }
        return Matrix(rows, cols, mat);
    }
    int operator==(Matrix x) 
    {
        if (x.rows != rows || x.cols != cols) 
        {
            return 0;
        }
        for (int i = 0; i< rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                if (arr[i][j] != x.arr[i][j]) 
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};

int main()
{
    cout<<"\n"<<endl;
    int arr1[MROWS][MCOLS], arr2[MROWS][MCOLS];
    arr1[0][0] = 5;
    arr1[0][1] = 6;
    arr1[1][0] = 7;
    arr1[1][1] = 8;

    arr2[0][0] = 8;
    arr2[0][1] = 7;
    arr2[1][0] = 6;
    arr2[1][1] = 5;
    
    Matrix mat1(2, 2, arr1);
    Matrix mat2(2, 2, arr1);
    Matrix mat3(2, 2, arr2);
    Matrix mat4;
    
    cout<< "Elements of Matrix 1:" <<endl;
    mat1.display();
    cout<< "Elements of Matrix 2:" <<endl;
    mat2.display();
    cout<< "Elements of Matrix 3:" <<endl;
    mat3.display();

    mat4 = mat1 + mat3;
    cout<< "Elements of Matrix after addition of Matrix 1 and Matrix 3:" <<endl;
    mat4.display();
    
    if (mat1 == mat2) 
    {
        cout<< "Matrix 1 is equals to Matrix 2" <<endl;
    }
    else 
    {
        cout<< "Matrix 1 is not equals to Matrix 2" <<endl;
    }
    if (mat1 == mat3) 
    {
        cout<< "Matrix 1 is equals to Matrix 3" <<endl;
    }
    else 
    {
    cout<< "Matrix 1 is not equals to Matrix 3" <<endl;
    }
    return 0;
}
