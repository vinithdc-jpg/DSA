#include <stdio.h>

struct Student{

    int id;
    char name[50];
    float marks;

};

int main(){

    struct Student s[5];

    for(int i=0;i<5;i++){

        printf("\nStudent %d\n",i+1);

        printf("ID: ");
        scanf("%d",&s[i].id);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);

    }

    printf("\nStudent Records\n");

    for(int i=0;i<5;i++){

        printf("\nID : %d",s[i].id);
        printf("\nName : %s",s[i].name);
        printf("\nMarks : %.2f\n",s[i].marks);

    }

    return 0;
}