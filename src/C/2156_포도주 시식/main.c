//
//  main.c
//  2156_kst
//
//  Created by 김승태 on 2018. 4. 8..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, arr[10001] = { 0 }, result[10001] = { 0 }, data;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    result[0] = arr[0];
    result[1] = arr[0] + arr[1];
    if (arr[0] + arr[1] < arr[0] + arr[2]) {
        data = arr[0] + arr[2];
    }
    else {
        data = arr[0] + arr[1];
    }
    
    if (data < arr[1] + arr[2]) {
        data = arr[1] + arr[2];
    }
    result[2] = data;
    for (int i = 3; i <= n; i++) {
        data = 0;
        data = arr[i] + result[i - 2];
        if (data < arr[i] + arr[i - 1] + result[i - 3]) {
            data = arr[i] + arr[i - 1] + result[i - 3];
        }
        if (data < result[i - 1]) {
            data = result[i - 1];
        }
        result[i] = data;
    }
    printf("%d", result[n]);
    return 0;
}
