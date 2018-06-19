//
//  main.c
//  11006_kst
//
//  Created by 김승태 on 2018. 6. 19..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	int T, N, M;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		scanf("%d", &M);
		printf("%d %d\n", 2 * M - N, N - M);
	}
}
