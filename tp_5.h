#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef char infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList_1302223041(list &L);
address createNewElement_1302223041(infotype data);
void insertLast_1302223041(list &L, address P);
void showAllData_1302223041(list L);
float vocalPersentage_1302223041(list L);
void showLastK_1302223041(list L, int k);
int selectMenu_1302223041();
