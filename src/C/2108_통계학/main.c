//
//  main.c
//  2108_kst
//
//  Created by 김승태 on 2018. 6. 18..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[8001] = {0, }, N, input;
    double avg = 0;
    int mid = -4001, mid_pos, feq_1 = 0, feq_2 = 0, range_s = 8001, range_e, count = 0;
    scanf("%d", &N);
    mid_pos = N/2;
    for(int i = 0; i<N; i++){
        scanf("%d", &input);
        avg += input;
        arr[input+4000]++;
    }
    avg /= N;
    
    for(int i = 0; i<8001; i++){
        count += arr[i];
        if(count > mid_pos){
            mid = i-4000;
            count = -1;
        }
        if(arr[i] > 0){
            range_e = i;
            if(range_s > i){
                range_s = i;
            }
            if(arr[feq_1] < arr[i]){
                feq_1 = i;
                feq_2 = i;
            }else if(arr[feq_1] == arr[i]){
                if(feq_1 == feq_2){
                    feq_2 = i;
                }
            }
        }
    }
    printf("%.0lf\n%d\n%d\n%d", avg, mid, feq_2-4000, range_e - range_s);
}
