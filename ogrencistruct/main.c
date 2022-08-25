#include <stdio.h>
#include <stdlib.h>

struct student{
    int number;
    char name[10];
    char surname[10];
    float midtermGrade;

    struct student *next;

};
typedef struct student node;
node *head, *newNode;


void studenList()
{
    int n=3, k;

    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            newNode = (node *)malloc(sizeof(node));
            head = newNode;
        }
        else
        {
            newNode->next = (node *)malloc(sizeof(node));
            newNode = newNode->next;
        }
        printf("------BILGILERINIZI GIRINIZ------\n");
        printf("Ogrenci No: "); scanf("%d", &newNode->number);
        printf("Ogrenci Adi: "); scanf("%s", newNode->name);
        printf("Ogrenci Soyadi: "); scanf("%s", newNode->surname);
        printf("Ogrenci Vize Notu: "); scanf("%f", &newNode->midtermGrade);
    }
    newNode->next = NULL;
    return head;
}

void ogrenciListele(void)
{
    node *p;
    p = head;
    while(p!=NULL)
    {
        printf("******ALINAN BILGILER******\n");
        printf("Ogrenci No: %d\n", p->number);
        printf("Ogrenci Adi: %s\n", p->name);
        printf("Ogrenci Soyadi: %s\n", p->surname);
        printf("Ogrenci Vize Notu: %f\n", p->midtermGrade);

        p = p->next;
    }
}

int main(void)
{
    while(1)
    {
        studenList();ogrenciListele();break;
    }


}
