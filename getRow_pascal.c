//
//  getRow_pascal.c
//  pascal_triangle
//
//  Created by Hanru Chen on 2/21/23.
//

#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    // Allocate memory for the output array
    int* result = (int*)malloc((rowIndex+1) * sizeof(int));
    *returnSize = rowIndex + 1;

    // Initialize the first element of the row to 1
    result[0] = 1;

    for (int i = 1; i <= rowIndex; i++) {
        // Compute the next element of the row using the previous element
        int prev = result[0]; // 1.
        for (int j = 1; j < i; j++) {
            int curr = result[j];
            result[j] = prev + curr;
            prev = curr;
        }
        // Set the last element of the row to 1
        result[i] = 1;
    }

    return result;
}
