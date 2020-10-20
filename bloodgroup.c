#include <stdio.h>
#include <string.h>
void main()
{ char Name[70], G[5], answer[10];
  int i;
  do
  {
    printf("What is your Name? ");
    scanf("%s", Name);
    do
    {
<<<<<<< HEAD
      printf("What is your blood groupaa [A, B, AB, or O]? ");
=======
      printf("What is your blood group [A, B, AB, or O]? ");
>>>>>>> 06afc2af8b6c01f16abc29f18609c7c1550d69e9
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
<<<<<<< HEAD
        printf("Blood group %s is incorrect!xx Please try again.\n", G);
=======
        printf("Blood group %s is incorrect! Please try again.\n", G);
>>>>>>> 06afc2af8b6c01f16abc29f18609c7c1550d69e9
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
