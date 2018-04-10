//
//  main.c
//  1629_kst
//
//  Created by 김승태 on 2018. 4. 10..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

long long division(long long A, long long B, long long C) {
    if (B == 1) {
        return A%C;
    }
    else if (B % 2 == 1) {
        return (A*division(A%C, B-1, C))%C;
    }
    else {
        long long save = division(A%C, B/2, C) % C;
        return (save*save) % C;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    long long A, B, C;
    scanf("%lld", &A);
    scanf("%lld", &B);
    scanf("%lld", &C);
    printf("%d\n", division(A%C, B, C));
    return 0;
}
