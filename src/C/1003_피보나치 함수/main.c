//
//  main.c
//  1003_kst
//
//  Created by 김승태 on 2018. 3. 27..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int iter;
    int num;
    int array[41][2];
    array[0][0] = 1;
    array[0][1] = 0;
    
    array[1][0] = 0;
    array[1][1] = 1;
    
    scanf("%d", &iter);
    for(int i = 0; i<iter; i++){
        scanf("%d", &num);
        for(int j = 2; j<=num; j++){
            array[j][0] = array[j-1][0]+array[j-2][0];
            array[j][1] = array[j-1][1]+array[j-2][1];
        }
        printf("%d %d\n", array[num][0], array[num][1]);
    }
    return 0;
}
