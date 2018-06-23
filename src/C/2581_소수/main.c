//
//  main.c
//  2581_kst
//
//  Created by 김승태 on 2018. 6. 17..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int M, N, data = 0, MIN;
	scanf("%d\n%d", &M, &N);
	for (int i = N; i >= M; i--){
		int check = 1;
		for (int j = i - 1; j > 1; j--){
			if (i%j == 0){
				check = 0;
				break;
			}
		}
		if (check && i != 1){
			data += i;
			MIN = i;
		}
	}
	if (data == 0){
		printf("%d", -1);
	}
	else{
		printf("%d\n%d", data, MIN);
	}
}
