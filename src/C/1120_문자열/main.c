//
//  main.c
//  1120_kst
//
//  Created by 김승태 on 2018. 5. 5..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char A[51], B[51];
    int dif_len, A_len, answer = 51;
    scanf("%s %s", &A, &B);
    A_len = strlen(A);
    dif_len = strlen(B) - A_len;
    for(int i = -1; i<dif_len; i++){
        int cur_ans = 0;
        for(int j = 0; j<A_len; j++){
            if(A[j] != B[j+i+1]){
                cur_ans++;
            }
        }
        if(cur_ans < answer){
            answer = cur_ans;
        }
    }
    
    printf("%d", answer);
}
