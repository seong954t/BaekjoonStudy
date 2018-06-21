//
//  main.c
//  1735_kst
//
//  Created by 김승태 on 2018. 4. 6..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int A, B, C, D, temp, temp1, temp2, result_A, result_B;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);
    temp1 = A*D + C*B;
    temp2 = B*D;
    result_A = temp1;
    result_B = temp2;
    while (temp2 != 0) {
        temp = temp1;
        temp1 = temp2;
        temp2 = temp%temp2;
    }
    
    printf("%d %d", result_A/temp1, result_B/temp1);
    return 0;
}
