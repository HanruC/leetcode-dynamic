//
//  pascal_dynamic.c
//  pascal_triangle
//
//  Created by Hanru Chen on 2/21/23.
//

#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    // Allocate memory for the output arrays
    int** result = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    *returnSize = numRows;
    
    result[0] = (int*)malloc(sizeof(int));
    result[0][0] = 1;
    (*returnColumnSizes)[0] = 1;
    
    for (int i = 1; i < numRows; i++) {
        result[i] = (int*)malloc((i+1)*sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
        
        result[i][0] = 1;
        result[i][i] = 1;
        for (int j = 1; j<i; j++) {
            result[i][j] = result[i-1][j-1] + result[i-1][j];
        }
    }
    return result;
}
