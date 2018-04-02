//
//  main.c
//  10430_kst
//
//  Created by 김승태 on 2018. 4. 2..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", (A+B)%C);
    printf("%d\n", (A%C + B%C)%C);
    printf("%d\n", (A*B)%C);
    printf("%d\n", (A%C * B%C)%C);
    return 0;
}
