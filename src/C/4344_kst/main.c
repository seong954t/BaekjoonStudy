//
//  main.c
//  10430_kst
//
//  Created by 김승태 on 2018. 4. 2..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int c, n, x;
    double result;
    int data[1000];
    scanf("%d", &c);
    for (int i = 0; i < c; i++){
        scanf("%d", &n);
        result = 0;
        for (int j = 0; j < n; j++){
            scanf("%d", &data[j]);
            result += data[j];
        }
        result /= n;
        x = 0;
        for (int j = 0; j < n; j++){
            if (result < data[j]){
                x++;
            }
        }
        printf("%.3lf%%\n", (double)x / n * 100);
    }
    return 0;
}
