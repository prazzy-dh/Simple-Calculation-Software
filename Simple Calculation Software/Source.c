//
//  Source.c
//  Simple Calculation Software
//
//  Created by Prajwal Dhungana on 4/24/20.
//  Copyright © 2020 Prajwal Dhungana. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int addFn(int first, int second)
{
    int sum;
    sum = first + second;
    return sum;
}

int subFn(int first, int second)
{
    int sub;
    sub = first - second;
    return sub;
}

int mulFn(int first, int second)
{
    int mul;
    mul = first * second;
    return mul;
}

int divFn(int first, int second)
{
    int div;
    if (first > second)
    {
        div = first/second;
    }
    else
    {
        div = second/first;
    }
    return div;
}