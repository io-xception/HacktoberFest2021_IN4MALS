#include <stdio.h>
#include <stdlib.h>

struct database
{
    char name[20];
    char father_name[20];
    long int ph_no;
    char location[20];
    char branch;
    struct database *next;
};
void output(struct database *q)
{
    printf("Name: %s\n", q->name);
    printf("Father's name: %s\n", q->father_name);
    printf("Phone number: %ld\n", q->ph_no);
    printf("Location: %s\n", q->location);
    printf("Branch: %c\n", q->branch);
}
void display(struct database *h)
{
    struct database *ptr = h, *prv, *h2;
    printf("CSE branch students:\n");
    int i = 1;
    while (ptr->branch == 'C')
    {
        printf("Student %d:\n", i);
        output(ptr);

        ptr = ptr->next;
        i++;
    }

    h2 = ptr;
    i = 1;
    printf("\nIT branch students:\n");
    while (h2 != NULL)
    {
        printf("Student %d:\n", i);
        output(h2);
        h2 = h2->next;
        i++;
    }
}
void insert_atbeg(struct database **h, struct database *curr)
{
    if (*h == NULL)
    {
        *h = curr;
    }
    else
    {
        curr->next = (*h);
        *h = curr;
    }
}

void insert_atend(struct database **h, struct database *curr)
{
    if (*h == NULL)
    {
        *h = curr;
    }
    else
    {
        struct database *ptr = *h;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = curr;
    }
}
int main()
{
    struct database *head = NULL;
    char choice;
    while (1)
    {
        printf("Do you want to add more student ? (y/n) : ");
        scanf(" %c" , &choice);
        if (choice == 'n')
            break;
        
        struct database *curr;
        curr = malloc(sizeof(struct database));
        printf("\nEnter student info - \n");
        printf("Name: ");
        scanf("%s", curr->name);
        printf("Father's name: ");
        scanf("%s", curr->father_name);
        printf("Location: ");
        scanf("%s", curr->location);
        getchar();
        printf("Branch: ");
        scanf("%c", &curr->branch);
        printf("Phone number: ");
        scanf("%ld", &curr->ph_no);
        curr->next = NULL;
        
        switch (curr->branch)
        {
        case 'C':
            insert_atbeg(&head, curr);
            break;
        case 'I':
            insert_atend(&head, curr);
            break;
        default:
            printf("Choice did not match");
            break;
        }
    }
    printf("\n");
    display(head);
    return 0;
}