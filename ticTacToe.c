//tic-tac-toe game developed by AKASH SHARMA
#include<stdio.h>
#include<stdlib.h>
char a[9]={0,0,0,0,0,0,0,0,0};
int x=0;
int p1;
int p2;
int n;
int d=0;
int n1,n2;
int c=1;
int z=0;
int y=0 ,e=0;
void play();
void player1() ;
void player2() ;
void final();
void result();
int main(void) {
    printf("                      TIC TAC TOE\n");
    printf("                       0  | 1 | 2 \n");
    printf("                      ____|___|_____\n");
    printf("                          |   |   \n");
    printf("                     __3__|_4_|_5__\n");
    printf("                          |   |   \n" );
    printf("                       6  | 7 | 8 \n");
    printf("                      0 to 8 are positions\n\n ");
    printf("                       WANNA PLAY\n");
    printf("                       PRESS 1 TO YES 0 FOR NO");

    scanf("%d",&x);
    if(x==1)
      {
        play();
      }
    else
      {
        exit(0);
      }
return 0;
}
void play()
{
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      if(j<2)
        {
        printf("%c|",a[i] );
        }
      else{
      printf("%c\n",a[i] );
    }
  }
}
    printf("PLAYER 1 TURN CHOOSE 2 OR 3" );
    scanf("%d", &p1);
    while(d<9)
    {
      if(c==1)
        {
          printf("PLAYER 1 ENTER POSITION\n");
          scanf("%d", &n);
          if (p1==2)
            {
              a[n]=2;
              p2=3;
            }
            else
            {
              a[n]=3;
              p2=2;
            }
            printf("%c\n",a[n] );
            printf("p1=%d and p2=%d\n",p1,p2);
            if(n<3)
            {
              n1=0;
              n2=n%3;
              player1();
                c=2;
            }
            else
              {
                n1=n/3;
                n2=n%3;
                player1();
                c=2;
              }
              d++;
              }
              if (c==2)
               {
                 printf("PLAYER 2 ENTER POSITION\n");
                 scanf("%d", &n);
                 if (p1==2) {
                   a[n]=3;
                   p2=3;
                 }
                 else
                 {
                   a[n]=3;
                   p2=2;

                 }
                 printf("%c\n",a[n] );
                 printf("p1=%d and p2=%d\n",p1,p2);
                 if(n<3)
                 {
                   n1=0;
                   n2=n%3;
                   player2();
                   c=1;
                 }
                 else
                 {
                   n1=n/3;
                   n2=n%3;
                   player2();
                   c=1;
                 }
                 d++;
               }

             }
             final();

           }
           void player1() {
             for (size_t i = 0; i < 3; i++) {
               printf("                      ");
               for (size_t j = 0; j < 3; j++) {
                 if(n1==i && n2==j)
                 {
                   printf("%c",a[n]);

                 }
                 if (j==2) {
                   printf("\n");

                 }
                 else
                 {
                 printf(" |");

               }
               }
             }
           }
           void player2() {
             for (size_t i = 0; i < 3; i++) {
               printf("                      ");
               for (size_t j = 0; j < 3; j++) {

                 if(n1==i && n2==j)
                 {
                   printf("%c",a[n]);
                 }
                 if (j==2) {
                   printf("\n");

                 }else
                 {
                 printf(" |");

}
               }
             }
           }
           void final() {

             printf("FINAL SCREEN\n");
             for (size_t i = 0; i < 3; i++) {
               printf("                      ");
               for (size_t j = 0; j < 3; j++) {


                   printf("%c",a[z]);
                 if (j==2) {
                   printf("\n");
z++;
                 }else
                 {
                 printf(" |");
                 z++;
           }
         }
       }
       printf("Enter 1 to calculate result\n");
       scanf("%d",&e);
       result();
     }
     void result() {
       if(a[0]==a[1] && a[1]==a[2])
       {
         printf("             %c WINS",a[0]);
       } else
       if(a[0]==a[4] && a[4]==a[8])
       {
         printf("             %c WINS", a[0]);

       }else
       if(a[0]==a[3] && a[3]==a[6])
       {
         printf("             %c WINS",a[0]);
       }else
       if(a[1]==a[5] && a[5]==a[7])
       {
         printf("             %c WINS",a[1]);
       } else
       if(a[3]==a[4] && a[4]==a[5])
       {
         printf("             %c WINS", a[3]);

       }else
       if(a[2]==a[4] && a[4]==a[6])
       {
         printf("             %c WINS",a[2]);
       }else
       if(a[2]==a[5] && a[5]==a[8])
       {
         printf("             %c WINS",a[2]);
       } else
       if(a[6]==a[7] && a[7]==a[8])
       {
         printf("             %c WINS", a[0]);

       }else
       {
         printf("             NONE WIN");
       }

     }
//AKASH SHARMA
