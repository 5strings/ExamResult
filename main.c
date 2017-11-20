//
//  main.c
//  Array
//
//  Created by Eun Jae Lee on 20/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  data type array_name[size];
//  int a[10];
//  char ch[30];

//  One dimensional arrays
//  2 dimennsional arrays
//  multi dimentional arrays

#include <stdio.h>

int main() {
    
    int marks[5], total = 0, avg = 0, i;
    printf("Enter your 5 subject marks \n");
    
    for (i=0; i<5; i++) {
        scanf("%d ",&marks[i]);
        
        total = total + marks[i];
        avg = total / 5;
    }
    printf("Total marks = %d \n",total);
    printf("Your average = %d \n", avg);
    
    getchar();
    
  /*
    int a[5] = {10,20,30,40,50};
    
    printf("%d \n",a[3]);
   =========================
    int a[5];
    
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;
  */
    
   // return 0;
}
