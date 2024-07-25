#include <iostream>
using namespace std;

#pragma once 

bool CheckIdentityMatrix(int arr[3][3], short rows, short cols)
{
    
    for (short i = 0; i  < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            if (i==j && arr[i][j] != 1) // check diagonal 
            {
                    return false;
             }else if(i != j && arr[i][j] != 0)
            {
                return false;
            }
            return true;       
        }
    }
    
    return 0;
}