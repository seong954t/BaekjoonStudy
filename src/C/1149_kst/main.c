//
//  main.c
//  1149_kst
//
//  Created by 김승태 on 2018. 4. 23..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int r, g, b, N, min;
    int result[1001][3] = { 0 };
    scanf("%d", &N);
    scanf("%d %d %d", &r, &g, &b);
    result[0][0] = r;
    result[0][1] = g;
    result[0][2] = b;
    for (int i = 1; i < N; i++) {
        scanf("%d %d %d", &r, &g, &b);
        if (result[i - 1][1] < result[i - 1][2]) {
            result[i][0] = result[i - 1][1] + r;
        }
        else {
            result[i][0] = result[i - 1][2] + r;
        }
        
        if (result[i - 1][0] < result[i - 1][2]) {
            result[i][1] = result[i - 1][0] + g;
        }
        else {
            result[i][1] = result[i - 1][2] + g;
        }
        
        if (result[i - 1][0] < result[i - 1][1]) {
            result[i][2] = result[i - 1][0] + b;
        }
        else {
            result[i][2] = result[i - 1][1] + b;
        }
    }
    if (result[N - 1][1] < result[N - 1][2]) {
        min = result[N - 1][1];
    }
    else {
        min = result[N - 1][2];
    }
    if (result[N - 1][0] < min) {
        min = result[N - 1][0];
    }
    printf("%d", min);
    return 0;
}


