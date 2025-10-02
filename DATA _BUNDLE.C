//simple c program
/*
	name: GIDEON NGUNJU
	reg: CT100/G/26133/25
	Description: data bundles application
*/

#include <stdio.h>

int main()
{ 
    // Display menu
    printf("DATA BUNDLES:\n");
    printf("1. 100MB @ KES50\n");
    printf("2. 500MB @ KES200\n");
    printf("3. 1GB   @ KES350\n");
    printf("4. 2GB   @ KES600\n");
    
    int choice;
    printf("Select bundle (1-4): ");
    scanf("%d", &choice);
    
    // Process selection
    switch(choice) {
        case 1:
		 printf("You selected: 100MB\nTotal: KES50\n");break;
        case 2: 
		printf("You selected: 500MB\nTotal: KES200\n"); break;
        case 3:
		 printf("You selected: 1GB\nTotal: KES350\n"); break;
        case 4: 
		printf("You selected: 2GB\nTotal: KES600\n"); break;
		
        default: printf("NOT APPLICABLE");
    }
    
    return 0;
}