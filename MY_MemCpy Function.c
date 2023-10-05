    /**
    *****************************************************************************************************

    @file        : main.c
    @author      : Islam Tohamy Sheaban
    @brief       : This function is to search a Character in a String /  String,fun(memcpy)_Program

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


        char Students_Marks1[30] ;
        char Students_Marks2[30] = "--132--------------------" ;


    /* ************************ Function Declaration  section start ****************************************** */

        void *My_Memcpy (void *New_Address , const void *Source_Address , unsigned int Length );

    /* ************************** Function Declaration section End *************************************** */

    /* **************************** Definition section End *********************************************** */




    /* ****************************** Main section start ************************************************* */    


        int main()
        {

            My_Memcpy ( Students_Marks1 , Students_Marks2 , 10);
            printf("%s\n",Students_Marks1);

            return 0;
        }


    /* ****************************** Main section End ************************************************* */



    /* ************************************************* Sub-Program section start ***************************************************** */


        void *My_Memcpy (void *New_Address , const void *Source_Address , unsigned int Length )

        {


            unsigned char *Temp_New_Address = New_Address ;
            unsigned char *Temp_Source_Address = Source_Address ;

        if ((NULL == New_Address) || (NULL == Source_Address))
        {
            printf("The Address of the element invalid\n");
        }
        else
        {
            while(Length--)
            {

                *Temp_New_Address++ = *Temp_Source_Address++ ;

            }
        }



        return (New_Address);
        }

    /* ***************************************************** Sub-Program section End ******************************************************* */



     /**
      Conclusion Code
     *****************************************************************************************************
             User                               Date                               Brief
     *****************************************************************************************************
         Islam  Tohmay                        8/August/2023                      String,fun(memcpy)_Program
     **/