//
//  main.c
//  1475_kst
//
//  Created by 김승태 on 2018. 4. 17..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, div = 10, max = 0, num[10] = { 0 };
    scanf("%d", &N);
    while (N / div){
        num[N%div]++;
        N /= div;
    }
    num[N%div]++;
    num[6] = num[9] = (num[6] + num[9] + 1) / 2;
    for (int i = 0; i < 10; i++){
        if (max < num[i]){
            max = num[i];
        }
    }
    printf("%d", max);
    return 0;
}
