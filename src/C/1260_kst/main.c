//
//  main.c
//  1260_kst
//
//  Created by 김승태 on 2018. 4. 5..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>
int N, M, V;
char edge[1001][1001] = { 0 , };

void getDFS(int point){
    edge[point][point] = 1;
    printf("%d ", point);
    for(int i = 1; i<N+1; i++){
        if(edge[i][i] == 0 && edge[point][i] == 1){
            edge[i][i] = 1;
            getDFS(i);
        }
    }
}

void getBFS(){
    int start = 0, end = 1, iter = 0,value;
    int save[1001];
    char bfs[1001] = { 0 , };
    save[0] = V;
    while(start != end){
        value = save[start++];
        printf("%d ", value);
        bfs[value] = 1;
        for(int i = 1; i<N+1; i++){
            if(bfs[i] == 0 && edge[value][i] == 1){
                save[end++] = i;
                bfs[i] = 1;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int start, end;
    
    scanf("%d %d %d", &N, &M, &V);
    for(int i = 0; i<M; i++){
        scanf("%d %d", &start, &end);
        edge[start][end] = 1;
        edge[end][start] = 1;
    }
    getDFS(V);
    printf("\n");
    getBFS();
    return 0;
}


