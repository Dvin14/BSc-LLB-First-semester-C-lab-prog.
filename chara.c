#include <stdio.h>
 int main()
 {
     char chara;
     printf("enter a character: ");
     scanf("%c", &chara);

     switch(chara)
     {
         case 'a' : printf("it's a vowel");
         break;
         case 'e' : printf("it's a vowel");
         break;
         case 'i' : printf("it's a vowel");
         break;
         case 'o' : printf("it's a vowel");
         break;
         case 'u' : printf("it's a vowel");
         break;

           default:
           if((chara>='0') && (chara<='9'))
           {
               printf("it's a digit");
           }
           else if ((chara>='a')&&(chara<='z'))
           { printf("it's a consonent");

           }
           else
           printf("neither a digit nor a consonent");




     }
 }
