//
//  main.c
//  2751_kst
//
//  Created by 김승태 on 2018. 4. 19..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, input;
    char arr_sort[2000002] = { 0, };
    scanf("%d", &N);
    for(int i = 0; i<N; i++){
        scanf("%d", &input);
        arr_sort[input+1000000] = 1;
    }
    for(int i = 0; i<2000002; i++){
        if(arr_sort[i] == 1){
            printf("%d\n", i-1000000);
        }
    }
    return 0;
}
