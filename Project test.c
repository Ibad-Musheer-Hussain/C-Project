#include <stdio.h>
#include <conio.h>
#include <string.h>
void fun_menu();
int total_price(char str[]);

int main()
{
	time_t t;
    time(&t);
	int token=rand(), invoice=rand();
	//Output start
    char str[80];
	FILE *fptr;
	fptr= fopen("start.txt","r");
	while(fgets(str,80 ,fptr))
	{
	puts(str);
	}
	fclose(fptr);
	printf("Token number:   %d\n", token);
	printf("Invoice number: %d\n", invoice);
	printf("Date and Time:  %s",ctime(&t));

fun_menu();

//Ordering Code
int total = 0,qty;
char input[40];

printf("=============================================================================\n");
printf("Item Name\t\tCost\t\tQty\t\tTotal\n");
printf("=============================================================================");
while (strcmp(input,"0") != 0)
    {
    printf("\nEnter code to order or press 0 to finish order : ");
    scanf("%s",input);
    if (strcmp(input,"0")== 0)
        break;
    total += total_price(input);
    }
printf("\n=============================================================================\n");
printf("\t\t\t\t\t Total Amount : %d",total);
printf("\n=============================================================================\n");
printf("                           Thanks for coming\n");

}



void fun_menu()
{
	    char str[80];
	FILE *fptr;
	fptr= fopen("menu.txt","r");
	while(fgets(str,80 ,fptr))
	{
	puts(str);
	}
	fclose(fptr);


}

int total_price(char input[])
{
    int total=0,qty,cost;
    
    FILE *dptr;
    dptr = fopen("output.txt","a+");

    do{
        printf("Enter quantity : ");
        scanf("%d",&qty);
        if (qty<=0)
        {
            printf("Invalid Amount\n");
    	}
    }while(qty<=0);
    //DEALS
    if(strcmp(input,"dn1")==0 || strcmp(input,"DN1")==0)
    {
        cost = 1050;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Deal Number 1\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Deal Number 1\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
        printf("\n=============================================================================");
    }
    else if(strcmp(input,"dn2")==0 || strcmp(input,"DN2")==0)
    {
        cost = 750;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Deal Number 2\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Deal Number 2\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"dn3")==0 || strcmp(input,"DN3")==0)
    {
        cost = 900;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Deal Number 3\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Deal Number 3\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    //EXTRA
    else if(strcmp(input,"e01")==0 || strcmp(input,"E01")==0)
    {
        cost = 400;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("4 pcs Nuggets\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"4 pcs Nuggets\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"e02")==0 || strcmp(input,"E02")==0)
    {
        cost = 150;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Hot and Sour Soup     \t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Hot and Sour Soup\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    //COLD DRINKS
    else if(strcmp(input,"cd1")==0 || strcmp(input,"CD1")==0)
    {
        cost = 60;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Pepsi 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Pepsi 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"cd2")==0 || strcmp(input,"CD2")==0)
    {
        cost = 60;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Sprite 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Sprite 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"cd3")==0 || strcmp(input,"CD3")==0)
    {
        cost = 60;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("7up 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"7up 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"cd4")==0 || strcmp(input,"CD4")==0)
    {
        cost = 60;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Coca Cola 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Coca Cola 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"cd5")==0 || strcmp(input,"CD5")==0)
    {
        cost = 60;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Miranda 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Miranda 500ml\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    //FRIES
    else if(strcmp(input,"f01")==0 || strcmp(input,"F01")==0)
    {
        cost = 100;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Regular Plain Fries\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Regular Plain Fries\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"f02")==0 || strcmp(input,"F02")==0)
    {
        cost = 100;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Regular Masala Fries\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Regular Masala Fries\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"f03")==0 || strcmp(input,"F03")==0)
    {
        cost = 180;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Jumbo Plain Fries\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Jumbo Plain Fries\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"f04")==0 || strcmp(input,"F04")==0)
    {
        cost = 180;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Jumbo Masala Fries\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Jumbo Masala Fries\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    //BURGER/SANDWICHES
    else if(strcmp(input,"bs1")==0 || strcmp(input,"BS1")==0)
    {
        cost = 240;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Chicken Burger\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Chicken Burger\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"bs2")==0 || strcmp(input,"BS2")==0)
    {
        cost = 250;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Beef Burger\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Beef Burger\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else if(strcmp(input,"bs3")==0 || strcmp(input,"BS3")==0)
    {
        cost = 200;
        total += cost * qty;
        printf("=============================================================================\n");
        printf("Club Sandwich\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"Club Sandwich\t\t%d\t\t%d\t\t%d",cost,qty,total);
        fprintf(dptr,"\n", cost);
	    printf("\n=============================================================================");
    }
    else{
        printf("INVALID CODE\n");
    }
        fprintf(dptr,"\n", cost);
return total;
}
