//
//  main.c
//  1463_kst
//
//  Created by 김승태 on 2018. 5. 22..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int min(int x, int y) {
    return x < y ? x : y;
}

int main(int argc, const char * argv[]) {
    int N, a, b, c, count[1000001] = { 0 };
    
    scanf("%d", &N);
    count[1] = 0;
    count[2] = 1;
    count[3] = 1;
    for (int i = 4; i <= N; i++) {
        count[i] = count[i - 1] + 1;
        if (i % 3 == 0) {
            count[i] = min(count[i / 3]+1, count[i]);
        }
        if (i % 2 == 0) {
            count[i] = min(count[i / 2]+1, count[i]);
        }
    }
    printf("%d\n", count[N]);
}
