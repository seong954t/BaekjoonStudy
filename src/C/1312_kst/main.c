//
//  main.c
//  10430_kst
//
//  Created by 김승태 on 2018. 4. 4..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int A, B, N, Niter = 1;
    scanf("%d %d %d", &A, &B, &N);
    A = A%B;
    for(int i = 0; i<N-1; i++){
        A =(A*10)%B;
    }
    printf("%d\n", A*10/B);
    return 0;
}
