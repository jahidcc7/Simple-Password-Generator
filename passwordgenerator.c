#include <stdio.h>
#include<stdlib.h>

    int main()
    {

        char letters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char letternumber[36]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
        char BigletterNum[36]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
        char letternumbBig[62]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};

       
  
        int num;
        char choice1,choice2,choice3;
        printf("Enter the password length :");
        scanf("%d",&num);

        printf("Do you want to include big letters ? Y/N\n");
        scanf(" %c",&choice1);

        printf("Do you want to include numbers ? Y/N\n");
        scanf(" %c",&choice2);

        if (choice1=='Y'){
            if(choice2=='Y'){
                for(int i=1;i<=num;i++){
            printf("%c",letternumbBig[rand()%62]);}
            } else{
            for(int i=1;i<=num;i++){
            printf("%c",BigletterNum[rand()%36]);
        }
        }

        }
        else{
              if(choice2=='Y'){
                for(int i=1;i<=num;i++){
            printf("%c",letternumber[rand()%36]);} }
        else{
            for(int i=1;i<=num;i++){
            printf("%c",letters[rand()%26]);
        }
        }
        }
return 0;
    }
