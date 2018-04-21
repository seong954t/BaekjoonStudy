//
//  main.c
//  2504_kst
//
//  Created by 김승태 on 2018. 4. 21..
//  Copyright © 2018년 김승태. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int size = 0, result = 0, value = 1;
    char scop[32] = { 0 }, data[32] = { 0 };
    fgets(scop, sizeof(scop), stdin);
    for (int i = 0; i < 31; i++){
        if (scop[i] == '('){
            data[size++] = '(';
            value *= 2;
            if (scop[i + 1] == ')'){
                result += value;
            }
        }
        else if (scop[i] == '['){
            data[size++] = '[';
            value *= 3;
            if (scop[i + 1] == ']'){
              result += value;
            }
        }
        else if (scop[i] == ')'){
            if(data[size - 1] == '('){
                size--;
                value /= 2;
            }
            else{
                size = 1;
                break;
            }
        }
        else if (scop[i] == ']'){
            if(data[size - 1] == '['){
                size--;
                value /= 3;
            }
            else{
                size = 1;
                break;
            }
        }
    }
    if (!size){
        printf("%d", result);
    }
    else{
        printf("%d", 0);
    }
    return 0;
}
