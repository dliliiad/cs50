#include <stdio.h>
#include <cs50.h>
#include <math.h>
void myFuncFormula(count);
int main(float money)
{





    printf("O hai! How much change is owed: ");
     float money = get_float();

         if(money >= 0)
        {

        int count = (int)round(money*100);
        myFuncFormula(count);




        printf("%i\n", tf + t + f + o);

        }
        else
        {

        printf("Get lost or give me positive float!\n");

        }

}

     int myFuncFormula(count){


             //25
        int tf = count/25;
        int tfOst = count%25;    //16   count-(count/25);tut ya napysala analog formuly

         //10
        int t = tfOst/10;
        tfOst = tfOst%10; //6

         //5
         int f = tfOst/5;
         tfOst = tfOst%5; //1
        // int f = tOst/5;
        // int fOst = tOst%5; //1


          //1
         int o = tfOst/1;
         tfOst = tfOst%1; //1
        // int o = fOst/1;
        // int oOst = fOst%1; //0

        }


