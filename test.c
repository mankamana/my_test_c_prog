#include <stdio.h>
#include <string.h>
    int main()
    {
        struct p
        {
            char *name;
            struct p *next;
        };
struct p *ptrary[10];
        struct p p, q;
        p.name = "xyz";
        p.next = NULL;
        ptrary[0] = &p;
        strcpy(q.name, p.name);
        ptrary[1] = &q;
        printf("%s\n", ptrary[1]->name);
        return 0;
    }
