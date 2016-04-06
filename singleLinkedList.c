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

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    list *parent = (list *)malloc(sizeof(list));
    parent -> data = 1;
    parent -> node = NULL;
    
    list *child1 = (list *) malloc(sizeof(list));
    child1 -> data = 2;
    child1 -> node = NULL;
    
    parent -> node = child1;
    
    printList(parent);
    return 0;
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




