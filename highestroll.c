//
//  main.c
//  highestroll
//
//  Created by Raleigh Dial on 1/22/19.
//  Copyright © 2019 Raleigh Dial. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int dice1;
    int dice2;
    int dice3;
    int dice4;
    int dice5;
    int list[5];
    char firstName[20];
    char lastName[20];
    int total;
    srand((int)time(0));
    printf("Please enter your first and last name:\n");
    scanf(" %s %s",firstName,lastName);
    printf("Hello %s %s! You rolled:\n",firstName,lastName);
    dice1= rand()%6+1;
    dice2= rand()%6+1;
    dice3= rand()%6+1;
    dice4= rand()%6+1;
    dice5= rand()%6+1;
    printf("Die 1: %d\n",dice1);
    printf("Die 2: %d\n",dice2);
    printf("Die 3: %d\n",dice3);
    printf("Die 4: %d\n",dice4);
    printf("Die 5: %d\n",dice5);
    total= dice1+dice2+dice3+dice4+dice5;
    printf("The total of your 5 die is: %d\n",total);
    list[0]=dice1;
    list[1]=dice2;
    list[2]=dice3;
    list[3]=dice4;
    list[4]=dice5;
    int temp;
    for(int i = 0; i<4; i++) {  //not sure how else to sort other than a mssive chain of If else statments, but considering we havent gotten
        for(int k = 0; k<4-i; k++) {  // to lists or if else yet I just went ahead to do what I can. This is just a sorting algo I found
            if(list[k] > list[k+1]) {
                temp = list[k];
                list[k] = list[k+1];
                list[k+1] = temp;
            }
        }
    }
    printf("Your maximum is: %d\n",list[4]);
    printf("Your minimum is: %d\n",list[0]);
    
    return 0;
}

