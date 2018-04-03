//
//  main.c
//  10430_kst
//
//  Created by 김승태 on 2018. 4. 3..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int iter;
    scanf("%d", &iter);
    char name[20];
    char failer[20] = { 0, };
    for(int i = 0; i<iter*2-1; i++){
        scanf("%s", name);
        for(int j = 0; j<strlen(name); j++){
            failer[j] ^= name[j];
        }
    }
    printf("%s", failer);
    return 0;
}
