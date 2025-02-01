#include <bits/stdc++.h>
using namespace std;

void printMatrix (int **m, int row,int column)
{

            for (int i = 0; i<row ; i++)
                {
                    for (int j=0;j<column;j++)
                        {

                              cout<<m[i][j]<<" ";
                        }
                   cout<<endl;
                }

}

int main()
{
    int row;
    int column;

    cin>>row >>column;

    //create matrix
    int **m = new int *[row];

    for (int i=0; i<row; i++)
    {
        m[i] = new int [column];
    }

    srand (time (0));

    //random data

     for (int i=0; i<row; i++)
    {
         for (int j=0; j<row; j++)
           {
                m[i] [j]= rand ()%10;//for random single or double digit value
           }

    }

    printMatrix(m,row,column);




    return 0;
}



