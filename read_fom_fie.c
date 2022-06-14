#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 300
int queue_array[MAX];
int rear = - 1;
int front = - 1;
struct customer
{
    int s_no;
    char name[10];
};
struct showroom
{
    int s_no;
    char name[10];
    int distance;
};

struct car
{
    int s_no;
    char name[10];
    int count;
    int price;
};
int main()
 {
 FILE *fp,*f,*p;
  int i=0,n=300,a,r1,r2,j=0,m=5,o=10,k=0,z,choice,g,v=0;
 struct customer s[n];
  struct showroom r[m];
  struct car c[o];
    fp=fopen("record.txt","r");
      if(fp==NULL)
    {
        printf("File cannot be opened\n");
        exit(0);
    }

         for(i=0;i<n;i++)
         {
                fscanf(fp,"%d %s",&s[i].s_no,s[i].name);
         }
     fclose(fp);

for(i=0;i<n;i++)
{
    if(rear == MAX - 1)
printf("Queue Overflow n");
else
{
if(front== - 1)
front = 0;
fscanf(fp,"%d",&s[i].s_no);
rear = rear + 1;
queue_array[rear] = s[i].s_no;
printf("%d\t",queue_array[i]);
a=queue_array[i];
printf("Welcome %s\n",s[a-1].name);
printf("Available ranges\n1.0 to 99999\n2.100000 to 299999\n3.300000 to 499999\n4.500000 to 699999\n5.700000 to 900000\n6.900000 above\n7.Exit\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
         printf("No cars available in this range\n");
         break;
case 2:   printf("Available car showroom nearby\n");
    f=fopen("showroom.txt","r");
     for(j=0;j<m;j++)
    {
       fscanf(f,"%d %s %d",&r[j].s_no,r[j].name,&r[j].distance);
       printf("%d %s showroom at distance %d km\n",r[j].s_no,r[j].name,r[j].distance);
    }
        printf("\nTo which showroom you want to go\n");
    scanf("%d",&g);

       printf("cars available in this showroom at this range are\n");
       p=fopen("car1.txt","r");
         for(k=0;k<o;k++)
    {
       fscanf(p,"%d %s %d %d",&c[k].s_no,c[k].name,&c[k].count,&c[k].price);
        if(c[k].price >= 100000 && c[k].price<299999)
       printf("%d %s %d %d\n",c[k].s_no,c[k].name,c[k].count-v,c[k].price);
    }
    v++;
    printf("Enter serial number of a car you wanted to buy\n");
    scanf("%d",&z);
    if(z==c[k].s_no)
    {
        //front = front + 1;

    }
    printf("Visit again Thank you %s for purchasing\n",s[a-1].name);
    break;
case 3:
       printf("Available car showroom nearby\n");
    f=fopen("showroom.txt","r");
     for(j=0;j<m;j++)
    {
       fscanf(f,"%d %s %d",&r[j].s_no,r[j].name,&r[j].distance);
       printf("%d %s showroom at distance %d km\n",r[j].s_no,r[j].name,r[j].distance);
    }
    printf("To which showroom you want to go\n");
    scanf("%d",&g);
           printf("cars available in this showroom at this range are\n");
       p=fopen("car2.txt","r");
         for(k=0;k<o;k++)
    {
       fscanf(p,"%d %s %d %d",&c[k].s_no,c[k].name,&c[k].count,&c[k].price);
        if(c[k].price >= 300000 && c[k].price< 499999)
       printf("%d %s %d %d\n",c[k].s_no,c[k].name,c[k].count-v,c[k].price);
    }
    v++;
    printf("Enter serial number of a car you wanted to buy\n");
    scanf("%d",&z);
    if(z==c[k].s_no)
    {
        front = front + 1;
    }
    printf("Visit again Thank you %s for purchasing\n",s[a-1].name);
    break;
case 4:
       printf("Available car showroom nearby\n");
    f=fopen("showroom.txt","r");
     for(j=0;j<m;j++)
    {
       fscanf(f,"%d %s %d",&r[j].s_no,r[j].name,&r[j].distance);
       printf("%d %s showroom at distance %d km\n",r[j].s_no,r[j].name,r[j].distance);
    }
   printf("To which showroom you want to go\n");
    scanf("%d",&g);

           printf("cars available in this showroom at this range are\n");
       p=fopen("car3.txt","r");
         for(k=0;k<o;k++)
    {
       fscanf(p,"%d %s %d %d",&c[k].s_no,c[k].name,&c[k].count,&c[k].price);
        if(c[k].price >= 500000 && c[k].price< 699999)
       printf("%d %s %d %d\n",c[k].s_no,c[k].name,c[k].count-v,c[k].price);
    }
    v++;
    printf("Enter serial number of a car you wanted to buy\n");
    scanf("%d",&z);
    if(z==c[k].s_no)
    {
        front = front + 1;
    }
    printf("Visit again Thank you %s for purchasing\n",s[a-1].name);
    break;
case 5:
       printf("Available car showroom nearby\n");
    f=fopen("showroom.txt","r");
     for(j=0;j<m;j++)
    {
       fscanf(f,"%d %s %d",&r[j].s_no,r[j].name,&r[j].distance);
       printf("%d %s showroom at distance %d km\n",r[j].s_no,r[j].name,r[j].distance);
    }
    printf("To which showroom you want to go\n");
    scanf("%d",&g);

           printf("cars available in this showroom at this range are\n");
           p=fopen("car4.txt","r");
         for(k=0;k<o;k++)
    {
       fscanf(p,"%d %s %d %d",&c[k].s_no,c[k].name,&c[k].count,&c[k].price);
        if(c[k].price >= 700000 && c[k].price<=900000)
       printf("%d %s %d %d\n",c[k].s_no,c[k].name,c[k].count-v,c[k].price);
    }
    v++;
    printf("Enter correct serial number of a car you wanted to buy\n");
    scanf("%d",&z);
    if(z==c[k].s_no)
    {
        front = front + 1;

    }
    printf("Visit again Thank you %s for purchasing\n",s[a-1].name);
    break;
case 6:
    printf("No cars available in this range\n");
    break;
case 7:
    printf("Thank you\n");
    exit(0);
    break;

default:printf("Invalid choice\n");
break;
}

}

}
return 0;
}
