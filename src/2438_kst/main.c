//
//  main.c
//  2438_kst
//
//  Created by 김승태 on 2018. 4. 8..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int A, i, j;
    scanf("%d", &A);
    for(i = 0; i<A; i++){
        for(j = 0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
