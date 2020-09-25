#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

static bool vexist(struct node* node, int target){
    if (node == NULL){
        return false;
    }
    if (target == node->data){
        return true;
    }
    else {
        return vexist(node->next, target);
    }
}

static unsigned int locate(struct node* node, unsigned int pos, int target){
    // DO NOT ATTEMPT TO RETURN NULL
    if (node == NULL){
        return 0;
    }
    else if (target == node->data){
        return pos+1;
    }
    else {
        return locate(node->next, pos+1, target);
    }
}
static int read(struct node *node, unsigned int pos, unsigned int counter){
    if (node == NULL){
        return 0x8000;
    }
    else if (pos == counter){
        return node->data;
    } else {
        return read(node->next, pos, counter+1);
    }
}

static bool assign(struct node* node, unsigned int pos, unsigned int counter, int value){
    if (node == NULL){
        return false;
    }
    else if (pos == counter){
        node->data=value;
        return true;
    } else {
        return assign(node->next, pos, counter+1, value);
    }
}
static bool makenext(struct node *node){
    unsigned int location;
    node->next=malloc(sizeof(node));
}
static unsigned int length(struct node* node, unsigned int counter){
    if (node == NULL) return counter;
    return length(node->next, counter+1);
}
