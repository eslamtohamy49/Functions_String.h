
    /**
    *****************************************************************************************************

    @file        : main.c
    @author      : Islam Tohamy Sheaban
    @brief       : This function is to search a Character in a String /  String,fun(memcmp)_Program

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

             char My_Numbers1[5] = {1,2,3,4,5};
             char My_Numbers2[5] = {1,5,3,4,5};


    /* ************************ Function Declaration  section start ****************************************** */


             int My_Memcmp (const void *FMemAddress , const void *SMemAddress , unsigned int Length );


    /* ************************** Function Declaration section End *************************************** */

    /* **************************** Definition section End *********************************************** */



    /* ****************************** Main section start ************************************************* */



             int main()
            {

                int Return_Real_Value ;

                Return_Real_Value = My_Memcmp( My_Numbers1 , My_Numbers2 , 5);
                printf("Return value is %i \n ", Return_Real_Value);


                return 0;

             }

    /* ****************************** Main section End ************************************************* */



    /* ************************************************* Sub-Program section start ***************************************************** */


            int My_Memcmp (const void *FMemAddress , const void *SMemAddress , unsigned int Length )
            {
                int Return_Value ;
                unsigned char *TempFMemAddress = FMemAddress;
                unsigned char *TempSMemAddress = SMemAddress;


                if ((NULL == FMemAddress) || (NULL == SMemAddress))
                {
                    printf("The value of the elements is not valid \n ");

                }
                else
                {
                if( TempFMemAddress == TempSMemAddress)
                {
                    Return_Value = 0;

                }
                else
                {
                    while(Length)
                    {
                        if(*TempFMemAddress != *TempSMemAddress)
                        {
                            Return_Value = (*TempFMemAddress < *TempSMemAddress) ?  -1 : 1 ;
                            break;
                        }
                        else
                        {
                            Length--;
                            TempFMemAddress++;
                            TempSMemAddress++;

                        }

                    }

                }

                }

                return Return_Value ;
            }
    
    /* ***************************************************** Sub-Program section End ******************************************************* */



     /**
      Conclusion Code
     *****************************************************************************************************
             User                               Date                               Brief
     *****************************************************************************************************
         Islam  Tohmay                        8/August/2023                      String,fun(memcmp)_Program
     **/


