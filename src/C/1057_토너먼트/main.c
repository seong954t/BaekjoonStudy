//
//  main.c
//  1057_kst
//
//  Created by 김승태 on 2018. 4. 5..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, A, B, result = 1;
    scanf("%d", &N);
    scanf("%d", &A);
    scanf("%d", &B);
    while ((A - 1) / 2 != (B - 1) / 2) {
        A = (A+1) / 2;
        B = (B+1) / 2;
        result++;
    }
    printf("%d", result);
    return 0;
}
