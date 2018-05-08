//
//  main.c
//  1541_kst
//
//  Created by 김승태 on 2018. 5. 8..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[51];
    int answer = 0, cur_val = 0, sign = 1;
    scanf("%s", &str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            cur_val *= 10;
            cur_val += str[i]-'0';
        }else{
            answer += sign*cur_val;
            cur_val = 0;
            if(str[i] == '-'){
                sign = -1;
            }
        }
    }
    answer += sign*cur_val;
    printf("%d", answer);
}
