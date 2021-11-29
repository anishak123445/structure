#include<stdio.h>
#include<conio.h>
struct employee {
    char name[20];
    int salary, number;
};
int main() {
    struct employee e[20], temp;
    int i, j;

    for(i=0; i<=19; i++)    {
        printf("Enter the Employee's Name, number and Salary:");
        scanf("%s %d %d", e[i].name,&e[i].number,&e[i].salary);
    }

    for(i=0; i<=18; i++)    {
        for(j=0; j<=18; j++)    {
            if(e[j].number>e[j+1].number)   {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;

            }
        }
    }
    printf("\nEmployee List:\nName\tnumber\tSalary\n");
    printf("-----------------------------------------------------\n");
    for(i=0; i<=19; i++) {
        printf("%s\t%d\t%d\n",e[i].name,e[i].number,e[i].salary);
    }
    getch();
}
