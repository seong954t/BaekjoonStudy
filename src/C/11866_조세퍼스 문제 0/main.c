//
//  main.c
//  11866_kst
//
//  Created by 김승태 on 2018. 8. 21..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N, M, result = 0, data[1001] = { 0 };
	scanf("%d %d", &N, &M);
	printf("<");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			do{
				result++;
				if (result > N){
					result %= N;
				}
			} while (data[result-1] != 0);
		}
		data[result - 1] = -1;
		if (i == N - 1){
			printf("%d>", result);
		}
		else
			printf("%d, ", result);
	}
}
