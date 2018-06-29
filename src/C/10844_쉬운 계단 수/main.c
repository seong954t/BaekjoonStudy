//
//  main.c
//  10844_kst
//
//  Created by 김승태 on 2018. 6. 18..
//  Copyright © 2018년 김승태. All rights reserved.
//

#define REMAIN 1000000000
int main(int argc, const char * argv[]) {
    int arr[101][10], N, answer = 0;
    for(int i = 0; i<10; i++){
        arr[0][i] = 1;
    }
    arr[0][0] = 0;
    scanf("%d", &N);
    for(int i = 1; i<N; i++){
        for(int j = 0; j<10; j++){
            if(j == 0){
                arr[i][j] = arr[i-1][j+1]%REMAIN;
            }
            else if(j == 9){
                arr[i][j] = arr[i-1][j-1]%REMAIN;
            }
            else{
                arr[i][j] = (arr[i-1][j-1]+arr[i-1][j+1])%REMAIN;
            }
        }
    }
    for(int i = 0; i<10; i++){
        answer = (answer+arr[N-1][i])%REMAIN;
    }
    printf("%d", answer);
}
