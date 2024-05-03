// WAP to store following details using structure. Name,DOB,Addresse,Contact no for customer.
// For address and DOB create another sturucture and use that structure into customer stucture.

#include<stdio.h>
struct customer
{
    char name[20];
    float phone;

    struct address
    {
        int block;
        char area[20];
        char city[20];
    }add;
    struct DOB
    {
        int dd;
        int mm;
        int yyyy;
    }dob;

}cust;

int main()
{
    struct customer cust;

    printf("Enter your name: ");
    scanf("%s", cust.name);

    printf("Enter your phone number: ");
    scanf("%f", &cust.phone);

    printf("Enter block no.: ");
    scanf("%d", &cust.add.block);

    printf("Enter area: ");
    scanf("%s", cust.add.area);

    printf("Enter city: ");
    scanf("%s", cust.add.city);

    printf("Enter birthdate(dd): ");
    scanf("%d", &cust.dob.dd);

    printf("Enter birth month(mm): ");
    scanf("%d", &cust.dob.mm);

    printf("Enter birth year(yyyy): ");
    scanf("%d", &cust.dob.yyyy);



    return 0;
}