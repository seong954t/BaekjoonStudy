//
//  main.c
//  2750_kst
//
//  Created by 김승태 on 2018. 6. 19..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N;
	int data[1000];
	scanf("%d\n", &N);
	for(int i = 0; i<N; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = 0; i<N; i++) {
		for (int j = i; j < N; j++) {
			if (data[i] > data[j]) {
				int temp = data[j];
				data[j] = data[i];
				data[i] = temp;
			}
		}
	}
	for (int i = 0; i<N; i++) {
		printf("%d\n", data[i]);
	}
}
