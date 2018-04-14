//
//  main.c
//  2839_kst
//
//  Created by 김승태 on 2018. 4. 14..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int A, result = 0, min = 0, i;
    scanf("%d", &A);
    min = A;
    for(i = A/5; i>=0; i--){
        if((A-5*i)%3 == 0){
            result = i+(A-5*i)/3;
            if(result < min){
                min = result;
            }
        }
    }
    if(min != A){
        printf("%d", min);
    }else{
        printf("%d", -1);
    }
    return 0;
}
