//
//  main.c
//  10430_kst
//
//  Created by 김승태 on 2018. 4. 4..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int T, V, E;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &V);
        scanf("%d", &E);
        printf("%d\n", 2 - V + E);
    }
    return 0;
}
