//
//  main.c
//  pascal_triangle
//
//  Created by Hanru Chen on 2/21/23.
//

#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int** result = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    *returnSize = numRows;

    for (int i=0; i<numRows; i++) {
        result[i] = (int*)malloc((i+1)*sizeof(int)); // each row of the Pascal's Triangle has i+1 elements.
        (*returnColumnSizes)[i] = i+1;

        for (int j=0; j<=i; j++) {
            if (j ==0 || j ==i) {
                result[i][j] = 1;
            } else {
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
    }
    return result;
}
