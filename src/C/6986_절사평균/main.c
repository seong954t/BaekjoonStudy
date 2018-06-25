//
//  main.c
//  6986_kst
//
//  Created by 김승태 on 2018. 4. 4..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, K, min = -1, max = -1, total = 0, sum = 0;
    double score;
    int scores[101] = {0, };
    
    scanf("%d %d", &N, &K);
    for(int i = 0; i<N; i++){
        scanf("%lf", &score);
        scores[(int)(score*10)]++;
    }
    for(int i = 0; i<101; i++){
        total += scores[i];
        if(total > K && min == -1){
            min = i;
            scores[i] = total-K;
        }
        if(total >= N-K && max == -1){
            max = i;
            scores[i] -= total-(N-K);
        }
    }
    for(int i = min; i<=max; i++){
        sum += i*scores[i];
    }
    printf("%.2lf\n", sum/((N-2*K)*10.0)+0.000000001);
    printf("%.2lf", (sum+min*K+max*K)/(N*10.0)+0.000000001);
    return 0;
}

