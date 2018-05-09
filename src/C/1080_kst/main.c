//
//  main.c
//  1080_kst
//
//  Created by 김승태 on 2018. 5. 9..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m, answer = 0;
    char A[51][51], B[51][51];
    char s = 1;
    scanf("%d %d", &n, &m);
    for(int i = 0; i<n; i++){
        scanf("%s", &A[i]);
    }
    for(int i = 0; i<n; i++){
        scanf("%s", &B[i]);
    }
    for(int i = 0; i<=n-3; i++){
        for(int j = 0; j<=m-3; j++){
            if(A[i][j] != B[i][j]){
                for(int k = i; k<i+3; k++){
                    for(int l = j; l<j+3; l++){
                        if(A[k][l] == '0'){
                            A[k][l] = '1';
                        }else{
                            A[k][l] = '0';
                        }
                    }
                }
                answer++;
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(A[i][j] != B[i][j]){
                answer = -1;
                break;
            }
        }
    }
    printf("%d", answer);
}

