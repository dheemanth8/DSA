#include<stdio.h>
#include<stdlib.h
#include<string.h>
struct stack
{
int top;
int capacity;
char* array;
};
struct stack* create stack(int capacity)
{
struct stack* stack123=(struct stack*)malloc(sizeof(struct stack));
stack 1->top=-1;
stack 1->capacity=capacity;
stack->array =(char*)malloc(sizeof(stack 1->capacity* sizeof(char));
return stack1;
}
int isEmpty (struct stack*stack1)
{
  return stack1->top==-1;
}
void push(struct stack* stack1.char item)
{
  stack1 -> array[++stack 1-> top]=item;
}
char pop(struct stack*stack 1)
{
  if(! isEmpty(stack))
    return stack 1->array[stack 1->top--];
return '10';
}

