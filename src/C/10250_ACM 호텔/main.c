//
//  main.c
//  10250_kst
//
//  Created by 김승태 on 2018. 5. 20..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T, H, W, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        int result = 0;
        scanf("%d %d %d", &H, &W, &N);
        if (N%H != 0){
            result += (N%H) * 100;
        }
        else {
            result += H * 100 - 1;
        }
        result += N / H + 1;
        printf("%d\n", result);
    }
}
