//
//  main.c
//  2352_kst
//
//  Created by 김승태 on 2018. 5. 9..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, arr[40001], idx = 0, input;
    scanf("%d", &n);
    scanf("%d", &input);
    arr[0] = input;
    
    for(int i = 1; i<n; i++){
        scanf("%d", &input);
        if(arr[idx] < input){
            arr[++idx] = input;
        }else{
            for(int j = 0; j<= idx; j++){
                if(arr[j] > input){
                    arr[j] = input;
                    break;
                }
            }
        }
    }
    printf("%d", idx+1);
}

