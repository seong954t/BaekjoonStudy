//
//  main.c
//  1874_kst
//
//  Created by 김승태 on 2018. 4. 10..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, data, x = 1, size = 0, value = 0;
    int top[100000] = { 0 };
    char io[200000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &data);
        for (int j = x; j <= data; j++){
            top[size++] = x;
            x++;
            io[value++] = '+';
        }
        if (data != top[--size]){
            break;
        }
        io[value++] = '-';
    }
    if (size != 0){
        printf("NO");
        return;
    }
    for (int i = 0; i < value; i++){
        printf("%c\n", io[i]);
    }
    return 0;
}
