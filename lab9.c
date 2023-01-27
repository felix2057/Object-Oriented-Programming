// WCP to store records of book as structured data. And print the details of the book having
// least price among all, where the book members are- title, author name, price & pages.
#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    int price;
    int pages;
};

void display(struct book a[], int n)
{
    int i, d, min = a[0].price;
    for (i = 0; i < n; i++)
    {
        if (a[i].price < min)
        {
            min = a[i].price;
            d = i;
        }
    }
    printf("details of book having minimum price\n");
    printf("Title: %s Author: %s Price: %d Pages: %d\n", a[d].title, a[d].author, a[d].price, a[d].pages);
}

int main()
{
    int n, i;
    printf("enter the no. of books\n");
    scanf("%d", &n);
    struct book a[n];
    printf("enter the details of book");
    for (i = 0; i < n; i++)
    {
        scanf("%s%s%d%d", a[i].title, a[i].author, &a[i].price, &a[i].pages);
    }
    printf("Details of book are\n");
    for (i = 0; i < n; i++)
    {
        printf("Title: %s Author: %s Price: %d Pages: %d\n", a[i].title, a[i].author, a[i].price, a[i].pages);
    }
    printf("\n");
    display(a, n);

    return 0;
}