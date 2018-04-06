//
//  main.c
//  10988_kst
//
//  Created by 김승태 on 2018. 4. 6..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[101];
    int len;
    char check = 1;
    scanf("%s", str);
    len = strlen(str);
    for(int i = 0; i<len; i++){
        if(str[i] != str[len-i-1]){
            check = 0;
            break;
        }
    }
    printf("%d", check);
    return 0;
}
