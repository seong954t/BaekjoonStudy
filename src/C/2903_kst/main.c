//
//  main.c
//  2903_kst
//
//  Created by 김승태 on 2018. 4. 8..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, value = 2,result = 3;
    scanf("%d", &N);
    for (int i = 1; i < N; i++) {
        result += value;
        value *= 2;
    }
    printf("%d", result*result);
    return 0;
}
