

    /**
    *****************************************************************************************************

    @file        : main.c
    @author      : Islam Tohamy Sheaban
    @brief       : This function is to search a Character in a String /  String,fun(memchr)_Program

    *****************************************************************************************************
    **/

    /* ********************************* Include section start ****************************************** */

              #include <stdio.h>
              #include <stdlib.h>
              #include <windows.h>
              #include <accctrl.h>
              #include <acc_prof.h>
              #include <activation.h>

    /* ******************************* Include section End ********************************************** */


    /* ************************ Definition section start ************************************************** */

             unsigned char Return_Character_Address     ;
             unsigned char Search_Character ;
             unsigned int Length ;
             const char Eslam[15] = "MY Name Islam" ;

    /* ************************ Function Declaration  section start ****************************************** */

             void *MY_memchr(const void *StAddress, int Character, unsigned int Length);

    /* ************************** Function Declaration section End *************************************** */

    /* **************************** Definition section End *********************************************** */



    /* ****************************** Main section start ************************************************* */

                int main()
                {

                  printf("Enter The Chararcter That you want to search \n");
                  scanf("%c",&Search_Character);
                  printf("Enter The Length of Character i will search in \n");
                  scanf("%i",&Length);
                  Return_Character_Address= MY_memchr( Eslam, Search_Character , Length);
                  printf("The Character Address 0x%X\n",Return_Character_Address);


                 return 0;
                }

     /* ****************************** Main section End ************************************************* */



    /* ************************************************* Sub-Program section start ***************************************************** */

               // This Function is Equivalent to memchr function in string.h
               // it's mission to search a character and return it's address

             void *MY_memchr(const void *StAddress, int Character, unsigned int Length)
             {
                unsigned char *TempStAddress = StAddress ;
                unsigned int Error_State_Val = 0 ;

                if (NULL == StAddress)
                {
                    printf("invalid value \n");
                }

                else
                {
                  while(Length)
                  {

                     if (Character == *TempStAddress)
                     {
                       Error_State_Val = 0 ;
                       printf("%c is exit into array\n",Character);

                       break;
                     }
                     else
                     {
                         Error_State_Val = 1 ;
                         Length--;
                         TempStAddress++;
                     }
                  }
                }


                if (Error_State_Val == 1)
                {
                    printf("The Character %c is not exit \n",Character);
                }


                return (Character);
             }

   /* ***************************************************** Sub-Program section End ******************************************************* */



     /**
      Conclusion Code
     *****************************************************************************************************
             User                               Date                               Brief
     *****************************************************************************************************
         Islam  Tohmay                        8/August/2023                      String,fun(memchr)_Program
     **/





