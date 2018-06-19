//
//  main.c
//  1049_kst
//
//  Created by 김승태 on 2018. 5. 3..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, M, set, single, setVal = 0x7fffffff, singleVal = 0x7fffffff, mixSet = 0x7fffffff, mixSingle = 0x7fffffff, answer = 0x7fffffff;
    scanf("%d %d", &N, &M);
    for(int i = 0; i<M; i++){
        scanf("%d %d", &set, &single);
//        모두 묶음
        if(((N-1)/6 + 1) * set < setVal){
            setVal = ((N-1)/6 + 1) * set;
        }
//        모두 단일
        if(N * single < singleVal){
            singleVal = N * single;
        }
//        단일 + 묶음
        if((N/6)*set < mixSet){
            mixSet = (N/6)*set;
        }
        if((N%6)*single < mixSingle){
            mixSingle = (N%6)*single;
        }
    }
    answer = setVal;
    if(singleVal < answer){
        answer = singleVal;
    }
    if(mixSet + mixSingle < answer){
        answer = mixSet + mixSingle;
    }
    printf("%d", answer);
}
