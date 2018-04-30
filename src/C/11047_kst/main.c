//
//  main.c
//  11047_kst
//
//  Created by 김승태 on 2018. 5. 1..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, K, answer = 0;
    int A[11] = { 0, };
    scanf("%d %d", &N, &K);
    for(int i = 0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(int i = N-1; i>=0; i--){
        answer += K / A[i];
        K %= A[i];
    }
    printf("%d", answer);
}
