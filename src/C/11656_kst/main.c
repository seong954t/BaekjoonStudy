//
//  main.c
//  11656_kst
//
//  Created by 김승태 on 2018. 4. 6..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char S[1001];
    char arrS[1001][1001];
    scanf("%s", S);
    int len = strlen(S);
    for(int i = 0; i<len; i++){
        for(int j = i; j<len; j++){
            arrS[i][j-i] = S[j];
        }
    }
    for(int i = 0; i<len-1; i++){
        for(int m = i+1; m<len; m++){
            for(int j = 0; j<len; j++){
                if(arrS[i][j] > arrS[m][j]){
                    char save[1001];
                    for(int k = 0; k<len; k++){
                        save[k] = arrS[m][k];
                        arrS[m][k] = arrS[i][k];
                        arrS[i][k] = save[k];
                    }
                    break;
                }else if(arrS[i][j] < arrS[m][j]){
                    break;
                }
            }
        }
    }
    for(int i = 0; i<len; i++){
        printf("%s\n", arrS[i]);
    }
    return 0;
}
