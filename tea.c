 /*
    Build me with
      gcc -o argv argv.c
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(int argc, char **argv) {//const char * argv[]){ const char *num = readline(NULL);



   if(argc <= 1) {

      return 0;
   }
   //char *num = readline(NULL);
   //int myarg = atoi(num);

   //if(sscanf( argv[2], "%d", &myarg) != 1)
   //{
     if(!strcmp(argv[1], "Mama")) {
        //printf("Выпьем %d чаю, %s?\n", myarg, argv[1]);
        printf("Выпьем чаю, %s?\n",argv[1]);
            int i;
            //for(i=0;i<myarg;i++)
            for(i=1;i<6;i++)
            {
                printf("Делаю один глоток!\n");
            }
        printf("%s чай выпила!\n", argv[1]);
        } else if(!strcmp(argv[1], "Liliia")) {
            //printf("Выпьем %d чаю, %s?\n", myarg, argv[1]);
            printf("Выпьем чаю, %s?\n", argv[1]);

            //int i;
            //for(i=myarg;i>=0;i--)
            for(int i=0;i<10;i++)
            {
                printf("Делаю один глоток!\n");
            }
            printf("%s чай выпила!\n", argv[1]);
     } else {
         printf("Чай пить некому!\n");
     }

   //}
     return 0;
 }
