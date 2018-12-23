#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, redctr, bluectr, brownctr, yellowctr, greenctr, purplectr;
    redctr = 0, bluectr = 0, brownctr = 0, yellowctr = 0, greenctr = 0, purplectr = 0;
    #define SENTINEL 9      //9 stops vote

    do{
    printf("The Many Colors of M&Ms Candy\n1. red\n2. blue\n3. brown\n4. yellow\n5. green\n6. purple");
    printf("\nVote on your favorite color by typing the number before it.");
    printf("\nType 9 to stop voting.\n");
    printf("\n\nPlease type in your vote: ");
    scanf("%d", &n);

    switch (n)
    {

    case 1:
    printf("\nYou chose red!\n\n");
    redctr = redctr + 1;
    break;

    case 2:
    printf("\nYou chose blue!\n\n");
    bluectr = bluectr +1;
    break;

    case 3:
    printf("You chose brown!\n\n");
    brownctr = brownctr +1;
    break;

    case 4:
    printf("You chose yellow!\n\n");
    yellowctr = yellowctr +1;
    break;

    case 5:
    printf("You chose green!\n\n");
    greenctr = greenctr + 1;
    break;

    case 6:
    printf("You chose purple!\n\n");
    purplectr = purplectr + 1;
    break;

    scanf("%d", &n);
        if ("n = SENTINEL")
            break;

    case 9: printf("\nYou have finished voting!");
    printf("\nHere are the voting results:");

    printf("\nred %d ", redctr);
    printf("\nblue %d ", bluectr);
    printf("\nbrown %d ", brownctr);
    printf("\nyellow %d ", yellowctr);
    printf("\ngreen %d ", greenctr);
    printf("\npurple %d ", purplectr);
    scanf("%d", &n);}
}
while(1);
return 0;
}










