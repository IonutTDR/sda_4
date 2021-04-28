#pragma once
#ifndef MODULE_H
#define MODULE_H

#define DIM 50

typedef struct
{
	int	x[DIM];
	int n;
}Sequence;


void read(Sequence& s);
void print(Sequence s);
void recursiveBubbleSort(Sequence& s, int n);

#endif
