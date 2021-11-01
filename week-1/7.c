#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt, r;
    printf("Enter amount: ");
    scanf("%d", &amt);
    printf("\n");

    r = amt / 500;
    if(r > 0) {
        printf("500 : %d", r);
        printf("\n");
        amt = amt % 500;
    } 
    r = amt / 100;
    if(r > 0) {
        printf("100 : %d", r);
        printf("\n");
        amt = amt % 100;
    }
    r = amt / 50;
    if(r > 0) {
        printf("50 : %d", r);
        printf("\n");
        amt = amt % 50;
    } 
    r = amt / 20;
    if(r > 0) {
        printf("20 : %d", r);
        printf("\n");
        amt = amt % 20;
    } 
    r = amt / 10;
    if(r > 0) {
        printf("10 : %d", r);
        printf("\n");
        amt = amt % 10;
    } 
    r = amt / 5;
    if(r > 0) {
        printf("5 : %d", r);
        printf("\n");
        amt = amt % 5;
    } 
    r = amt / 2;
    if(r > 0) {
        printf("2 : %d", r);
        printf("\n");
        amt = amt % 2;
    } 
    if(amt > 0) {
        printf("1 : %d", amt);;
    }
    printf("\n");
    return 0;
}