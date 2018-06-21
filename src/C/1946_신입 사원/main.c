//
//  main.c
//  1946_kst
//
//  Created by 김승태 on 2018. 5. 9..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T, N, rank[100002], paperScore, interviewScore, maxScore, answer;
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
        scanf("%d", &N);
        answer = 1;
        for(int j = 0; j<N; j++){
            scanf("%d %d", &paperScore, &interviewScore);
            rank[paperScore] = interviewScore;
        }
        maxScore = rank[1];
        for(int k = 2; k<N+1; k++){
            if(rank[k] < maxScore){
                maxScore = rank[k];
                answer++;
            }
        }
        printf("%d\n", answer);
    }
}


