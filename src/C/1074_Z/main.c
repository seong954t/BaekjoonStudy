//
//  main.c
//  4307_kst
//
//  Created by 김승태 on 2018. 5. 9..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>
int Z(int N, int r, int c);

int main(int argc, const char * argv[]) {
    int N, r, c;
    scanf("%d %d %d", &N, &r, &c);
    printf("%d", Z(N, r, c));
}
int Nsquare(int N){
    int result = 1;
    for(int i = 0; i<N; i++){
        result *= 2;
    }
    return result;
}

int Z(int N, int r, int c){
    int size = Nsquare(N-1);
    int answer = 0;
    if(N == 1){
        return 2*r+c;
    }
    if(size < r+1){
        answer += 2*size*size;
        r -= size;
    }
    if(size < c+1){
        answer += size*size;
        c -= size;
    }
    
    return answer+Z(N-1, r, c);
}


