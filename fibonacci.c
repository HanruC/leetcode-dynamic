//
//  main.c
//  fibonacci
//
//  Created by Hanru Chen on 2/21/23.
//

#include <stdio.h>

int fib(int n){
    if (n == 0 || n == 1) {
        return n;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}
