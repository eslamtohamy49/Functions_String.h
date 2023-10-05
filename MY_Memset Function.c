    /**
    *****************************************************************************************************

    @file        : main.c
    @author      : Islam Tohamy Sheaban
    @brief       : This function is to search a Character in a String /  String,fun(memset)_Program

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

       char Students_Marks[30];

    /* ************************ Function Declaration  section start ****************************************** */

    /* ************************ Function Declaration  section start ****************************************** */

      void *My_Memset ( void *Start_Address, unsigned char Value , unsigned int Length);


    /* ************************** Function Declaration section End *************************************** */

    /* **************************** Definition section End *********************************************** */




    /* ****************************** Main section start ************************************************* */


          int main()
            {

              printf(" %s \n ",Students_Marks);

              My_Memset( Students_Marks , '*' , 5);
 
              printf("%s \n ",Students_Marks);

              return 0;
           }


    /* ****************************** Main section End ************************************************* */



    /* ************************************************* Sub-Program section start ***************************************************** */

        //this function to set data form address to another address

        void *My_Memset ( void *Start_Address, unsigned char Value , unsigned int Length)

        {

            unsigned char *TemplatePtr = Start_Address;

            if (NULL == Start_Address)
            {
                printf("The start address is invalid \n");
            }
            else
            {
            while (Length-- )   // while(0) break the loop , while(1) the loop work for ever
            {
                *TemplatePtr = Value ;
                TemplatePtr++;
            }


            }


            return (Start_Address);
        }

    /* ***************************************************** Sub-Program section End ******************************************************* */



     /**
      Conclusion Code
     *****************************************************************************************************
             User                               Date                               Brief
     *****************************************************************************************************
         Islam  Tohmay                        8/August/2023                      String,fun(memset)_Program
     **/