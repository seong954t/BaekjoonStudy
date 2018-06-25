//
//  main.c
//  4913_kst
//
//  Created by 김승태 on 2018. 4. 16..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char arr[100001] = { 0, };
    int x_array[100001];
    int y_array[100001];
    arr[0] = 1;
    arr[1] = 1;
    x_array[2] = 1;
    y_array[2] = 1;
    for(int i = 2; i<1000; i++){
        if(arr[i] == 0){
            for(int j = i*2; j<100001; j += i){
                arr[j] = 1;
            }
        }
    }
    for(int i = 3; i<100001; i++){
        x_array[i] = x_array[i-1];
        y_array[i] = y_array[i-1];
        if(arr[i] == 0){
            x_array[i] = x_array[i-1]+1;
            if(i%4 == 1){
                y_array[i] = y_array[i-1]+1;
            }
        }
    }
   
    while(1){
        int L, U, sL, sU;
        scanf("%d %d", &L, &U);
        
        if(L == -1 && U == -1){
            return 0;
        }
        sL = L;
        sU = U;
        if(L < 1){
            sL = 1;
        }
        if(U < 1){
            sU = 1;
        }
        printf("%d %d %d %d\n", L, U, x_array[sU]-x_array[sL-1], y_array[sU]-y_array[sL-1]);
    }
    return 0;
}
