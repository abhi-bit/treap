#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "treap.h"

int
main(void)
{
    srand(time(NULL));
    treap_t* root = NULL;

    for (int i = 10; i < 20; i++) {
        printf("Inserting %d \n", i);
        root = insert(root, i);
    }

    printf("InOrder traversal of input treap\n");
    printInOrder(root);
    printf("\n");

    printf("Delete 10, 19\n");
    root = delete(root, 19);
    root = delete(root, 10);

    printf("InOrder traversal of input treap post deletion\n");
    printInOrder(root);

    return 0;

}
