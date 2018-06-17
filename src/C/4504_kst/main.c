//
//  main.c
//  4504_kst
//
//  Created by 김승태 on 2018. 6. 17..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, data;
	scanf("%d", &n);
	while (scanf("%d", &data) && data != 0) {
		if (data%n) {
			printf("%d is NOT a multiple of %d.\n", data, n);
		}
		else {
			printf("%d is a multiple of %d.\n", data, n);
		}
	}
}
