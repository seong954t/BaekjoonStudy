//
//  main.c
//  1011_kst
//
//  Created by 김승태 on 2018. 4. 2..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int T, start, end;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &start, &end);
        int length = end - start, j = 0;
        unsigned int data = 0;
        while (length > data*2){
            j++;
            data += j;
        }
        data *= 2;
        data -= j - 1;
        if (length < data){
            printf("%d\n", 2 * j -1);
        }
        else{
            printf("%d\n", 2 * j);
        }
    }
    return 0;
}
