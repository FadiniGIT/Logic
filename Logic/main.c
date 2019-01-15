//
//  main.c
//  Logic
//
//  Created by David on 1/12/19.
//  Copyright © 2019 Fadini. All rights reserved.
//

#include <stdio.h>

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
    
                                            //    for (int j = 0; j < user_input_inputnum; j++) {
                                            //        printf("\n%d", user_input_array[j]);
                                            //    }
    //Switch for user input
    switch (user_input_select) {
        case 1 :    printf("CHOICE_ONE_SELECTED");
                    break;
        case 2 :    printf("CHOICE_TWO_SELECTED");
                    break;
        case 3 :    printf("CHOICE_THREE_SELECTED");
                    break;
        case 4 :    printf("CHOICE_FOUR_SELECTED");
                    break;
        case 5 :    printf("CHOICE_FIVE_SELECTED");
                    break;
        default:    printf("NOT_VALID_CHOICE...something is wrong cause this message shouldn't even be seen");
                    break;
    }
    //create secondary file too
    
    
    
    
    return 0;
}
