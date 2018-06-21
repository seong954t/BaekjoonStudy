//
//  main.c
//  1789_kst
//
//  Created by 김승태 on 2018. 5. 7..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned int N, result;
    scanf("%d", &N);
    for (result = 1; N >= result; result++)
        N -= result;
    printf("%d", result - 1 );
}
