//
//  main.c
//  11050_kst
//
//  Created by 김승태 on 2018. 8. 21..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int result = 1, N, K;
	scanf("%d %d", &N, &K);
	for (int i = N; i > N - K; i--){
		result *= i;
	}
	for (int i = K; i > 0; i--){
		result /= i;
	}
	printf("%d", result);
}
