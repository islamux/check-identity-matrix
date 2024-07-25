#include <iostream>
#include "check_identity_matrix.h"
using namespace std; 

#pragma once

void PrintResult(int arr[3][3], short rows, short cols)
{
    if (CheckIdentityMatrix(arr, rows, cols))
                cout << "Yes, matrix is identity.\n";
    else
                cout << "No, matrix is not identity.\n";
    
    
}