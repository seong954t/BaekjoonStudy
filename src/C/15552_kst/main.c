//
//  main.c
//  15552_kst
//
//  Created by 김승태 on 2018. 4. 2..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int iter, A, B;
    scanf("%d", &iter);
    for(int i =0; i<iter; i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}
