#include <stdio.h>

typedef int bool;

#define true 1
#define false 0
#define maxStackSize 100

int arr[maxStackSize];
int idx;

void init(){ idx = 0; }
void push(int item){ arr[idx++] == item; }
int pop() { return arr[--idx]; }
bool isempty(){ return idx == 0 ? true : false; }
bool isfull(){ return idx == maxStackSize ? true : false; }

void main()
{
		init();
}

