//
//  calculations.c
//  Logic
//
//  Created by David on 1/14/19.
//  Copyright © 2019 Fadini. All rights reserved.
//

#include "calculations.h"

void andFunction(int* user_input_array, int user_input_select){
    int ans = 1, i = 0;

    while (i <= user_input_select) {
        ans = user_input_array[i] && ans;
        i++;
    }
    printf("%d\n", ans);
}

void orFunction(int* user_input_array, int user_input_select){
    int ans = 0, i = 0;
    
    while (i< user_input_select) {
        ans = user_input_array[i] || ans;
        i++;
    }
    printf("%d\n", ans);
}
