//
//  main.c
//  test
//
//  Created by Amit Kumar on 4/6/16.
//  Copyright © 2016 Amit Kumar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct mystruct {
    int data;
    struct mystruct *node;
};

typedef struct mystruct list;
void printList (list *);

void makelistlarge(list *);

void appendatlast (list *, list *);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    list *parent = (list *)malloc(sizeof(list));
    parent -> data = 0;
    parent -> node = NULL;
  
    makelistlarge(parent);
    printList(parent);  
    return 0;
}

void appendatlast (list *appendlast, list * parent){
    list *temp = parent;
    while (temp -> node)
    {
    //printf("in while loop \n");
        if (temp -> node){
        temp = temp -> node;
        }
    }

    temp -> node = appendlast;

}

void makelistlarge(list *parent){
    for (int i=0; i<= 10; i++)
    {
        list *templist = (list *)malloc(sizeof(list));
        templist -> data = i + 1;
        templist -> node = NULL;
        appendatlast (templist, parent);
    }

}

void printList(list *theList) {
  
    if (theList == NULL) {
        printf("Empty list");
    }else {
        
    list *temp = theList;
    while (temp ) {
        printf("\n %d \n",temp ->data);
        temp = temp -> node;
        
    }
    }
};




/*                 _ _   
  __ _ _ __ ___ (_) |_ 
 / _` | '_ ` _ \| | __|
| (_| | | | | | | | |_ 
 \__,_|_| |_| |_|_|\__|
  

*/                     
