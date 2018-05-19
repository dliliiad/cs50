#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
//define my caesarCipher
void myFuncFormula(char* plainText,int key);
int main(int argc, char* argv[]){//????????????????/char*

    if (argc != 2)
    {
    printf("Usage: ./caesar k\n");
    return 1;
    }
    //printf(" %s\n", argv[1]);
    int key = atoi(argv[1]);
    char plainText[101];

///////
      printf("Phrase for encryption to plaintext : ");
      fgets(plainText, sizeof(plainText), stdin);

      printf("aplainText: ");//print the ciphered text
   myFuncFormula(plainText,key);
    //system(pause);//connect out if not use wind---------------------------???????????????
    return 0;
}

 myFuncFormula(plainText,key)
 {
     int n;

    for (int i = 0, n  = strlen(plainTexst); i < n; i++)//6

{

    printf("%c", aplainText=(plainTexst[i]+key)mod26);// plainTexst[i]
}


   // return aplainText;


}

        //  if(plainText >= 0 && key >= 0)
        // {






        // printf("After encrypt:%c\n",aplainText);

        // }
        // else
        // {

        // printf("Get lost or give me positive float!\n");

        // }
//}