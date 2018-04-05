//
//  main.c
//  3036_kst
//
//  Created by 김승태 on 2018. 3. 27..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>
int get_gcd(int a, int b);

int main(int argc, const char * argv[]) {
    // insert code here...
    int iter, first, second, gcd;
    scanf("%d", &iter);
    scanf("%d", &first);
    for(int i = 0; i<iter-1; i++){
        scanf("%d", &second);
        gcd = get_gcd(first, second);
        printf("%d/%d\n", first/gcd, second/gcd);
    }
    return 0;
}

int get_gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return get_gcd(b, a % b);
}
