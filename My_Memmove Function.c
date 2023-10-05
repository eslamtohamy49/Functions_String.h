

    /**
    ********************************************************************************************************

    @file      : main.c
    @author    : Islam Tohamy Shaban
    @brief     : This Function is to copy string into New address and it having a copy / String,fun_Program

    ********************************************************************************************************
    **/

    /* ********************************* Include section start ****************************************** */

          #include <stdio.h>
          #include <stdlib.h>
          #include <windows.h>
          #include <accctrl.h>
          #include <acc_prof.h>
          #include <activation.h>

    /* ******************************* Include section End ********************************************** */

    /* **************************** Definition section start ************************************************** */

           unsigned int  String_Length ;
           unsigned char Student_Name2[20];
           unsigned char Student_Name1[20]={"Ahmed Abd El-Ghaffar"};

    /* ************************ Function Declaration  section start ****************************************** */

          void *MY_memmove(void *Dest_Address, const void *Source_Address , unsigned int Length);

    /* ************************** Function Declaration section End *************************************** */

    /* **************************** Definition section End *********************************************** */



    /* ****************************** Main section start ************************************************* */

        int main()
        {


            for( ; ; )  // while(1)
             {

                  printf("\nEnter the Moving Length\n");
                  scanf("%i",&String_Length);

                  MY_memmove(Student_Name2 ,Student_Name1 , String_Length );
                  printf("%s\n",Student_Name2);

            }


         return 0;
        }

     /* ****************************** Main section End ************************************************* */




    /* ************************************************* Sub-Program section start ***************************************************** */


            void *MY_memmove(void *Dest_Address, const void *Source_Address , unsigned int Length)
             {
                unsigned char *Temp_Dest_Address   = Dest_Address ;
                unsigned char *Temp_Source_Address = Source_Address ;
                unsigned char Temp_Variable ;
                unsigned int Index ;

             if((NULL == Dest_Address) ||(NULL == Source_Address))
             {
               printf("Invalid string address value \n");
             }

            else
             {

                for( Index = Length ; Index > 0 ;Index-- )
                 {

                   Temp_Variable     =  *Temp_Source_Address ;
                   *Temp_Dest_Address =   Temp_Variable ;

                   Temp_Dest_Address++;
                   Temp_Source_Address++;

                 }

            }

            }

   /* ***************************************************** Sub-Program section End ******************************************************* */



    /**
     Conclusion Code
    *****************************************************************************************************
            User                               Date                               Brief
    *****************************************************************************************************
        Islam  Tohmay                        8/August/2023                      String,fun_Program
    **/
