//
//  main.c
//  11399_kst
//
//  Created by 김승태 on 2018. 5. 1..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[1000];
    int arr_result[1000];
    int size, result = 0;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        arr_result[i] = arr[i];
    }
    
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] < arr[j]) {
                arr_result[j] += arr[i];
            }
            else {
                arr_result[i] += arr[j];
            }
        }
    }
    
    for (int i = 0; i < size; i++) {
        result += arr_result[i];
    }
    printf("%d", result);
}
