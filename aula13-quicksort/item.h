//
// Created by Pichau on 03/03/2021.
//

#ifndef SORT_ITEM_H
#define SORT_ITEM_H

typedef int Item;
#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)

#endif //SORT_ITEM_H
