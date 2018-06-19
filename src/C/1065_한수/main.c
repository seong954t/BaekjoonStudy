//
//  main.c
//  1065_kst
//
//  Created by 김승태 on 2018. 6. 19..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, count = 0, result, gap,size = 10;
	int data[4];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (i < 100){
			count++;
		}
		else{
			int j = 0;
			result = i;
			while (result / 1 > 0){
				data[j++] = result%size;
				result /= size;
			}
			gap = data[0] - data[1];
			for (int k = 1; k < j; k++){
				int gap2 = data[k - 1] - data[k];
				if (gap != gap2){
					gap = -99;
				}
			}
			if (gap != -99){
				count++;
			}
		}
	}
	printf("%d", count);
}
