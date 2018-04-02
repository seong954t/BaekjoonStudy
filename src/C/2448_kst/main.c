//
//  main.c
//  10430_kst
//
//  Created by 김승태 on 2018. 4. 2..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

void printStar(int, int, int);
char star[1024*3][1024*6];

int main(int argc, const char * argv[]) {
    // insert code here...
    int iter;
    scanf("%d", &iter);
    printStar(iter, 0, iter-1);
    for(int i = 0; i<iter; i++){
        for(int j = 0; j<iter*2-1; j++){
            if(star[i][j] == 0){
                printf(" ");
            }
            printf("%c", star[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void printStar(int size, int x, int y){
    if(size == 3){
        star[x][y] = '*';
        
        star[x+1][y-1] = '*';
        star[x+1][y+1] = '*';
        
        star[x+2][y-2] = '*';
        star[x+2][y-1] = '*';
        star[x+2][y] = '*';
        star[x+2][y+1] = '*';
        star[x+2][y+2] = '*';
    }else{
        int nextSize = size/2;
        printStar(nextSize, x, y);
        printStar(nextSize, x+nextSize, y-nextSize);
        printStar(nextSize, x+nextSize, y+nextSize);
    }
}
