/*
 * factorial.cpp
 *
 *  Created on: Oct 17, 2016
 *      Author: malaravans
 */
#include<stdio.h>
#include "factorial.h"
int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}
int main(){
	
printf("%d",factorial(3));
	
	}






