//
//  main.c
//  Logic
//
//  Created by David on 1/12/19.
//  Copyright © 2019 Fadini. All rights reserved.
//

#include <stdio.h>
#include "calculations.h"

int main(int argc, const char * argv[]) {
    
    int user_input_select, user_input_inputnum, user_input_arrayData = 0;

    printf("[1] AND\n[2] OR\n[3] XOR\n[4] NOR\n[5] NAND\n");
    printf("Pick a number to perform operation.\n");
    scanf("%d", &user_input_select);

    if (user_input_select > 0 && user_input_select < 6) {
        
    }else{
        do {
            printf("Please enter a valid number.\n");
            scanf("%d", &user_input_select);
        }
        while (user_input_select <= 0 || user_input_select >= 6);
    }
    
   
    printf("\nHow many inputs are there?\n");
    scanf("%d",&user_input_inputnum);
    
    
    int user_input_array[user_input_inputnum];
   
    for (int i = 0; i < user_input_inputnum; i++) {
        
        printf("\nEnter input %d\n", (i + 1));
        scanf("%d", &user_input_arrayData);
        user_input_array[i] = user_input_arrayData;
    }
 
    //Switch for user input
    switch (user_input_select) {
        case 1 :    printf("The and operation of your inputs is:\n");
                    andFunction(user_input_array, user_input_select);
                    break;
        case 2 :    printf("The or operation of your inputs is:\n");
                    orFunction(user_input_array, user_input_select);
                    break;
        case 3 :    printf("The xor operation of your inputs is:\n");
                    break;
        case 4 :    printf("The nor operation of your inputs is:\n");
                    break;
        case 5 :    printf("The nand operation of your inputs is:\n");
                    break;
        default:    printf("NOT_VALID_CHOICE...something is wrong cause this message shouldn't even be seen");
                    break;
    }
    return 0;
}
