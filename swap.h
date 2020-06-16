//
// Created by Killerbot on 6/17/2020.
//

#ifndef TESTC_SWAP_H
#define TESTC_SWAP_H

#endif //TESTC_SWAP_H

// Swap method is defined in swap.h file, which is used to swap two numbers by using a temporary variable.
void swap (int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}