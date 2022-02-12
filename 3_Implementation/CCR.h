
/**
 * @file CCR.h
 * @author A vishnu (akiyuvishnu@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 


void    print_codes( void );     
double  decode_char( char code );
double  decode_multiplier( char code3);

 int main()
{
     char    code1;      
     char    code2;    
     char    code3;    
     double  resistance;
     double  color1;   
     double  color2;   
     double  color3;  
     int     flag;
     int     p;

     print_codes();
     printf( "\n\n\tEnter three color  codes of choise :  " );

    
     code1 = getchar();
     code2 = getchar();
     code3 = getchar();

     
     color1 = decode_char( code1 );
     color2 = decode_char( code2 );
     color3 = decode_multiplier( code3 );

     
     if ( color1 == -999.0 )
     {
            printf( "\n\n\t cannot validate the resistance values \n" );

     }
      else if ( color3 == -999.0 )
      {
            printf( "\n\n\t cannot validate the resistance values \n" );

      }
      else if ( color2 == -999.0 )
      {
            printf( "\n\n\t cannot validate the resistance values\n" );

      }
         
          

    
     else
      {
           p= 10 * color1 + color2;
          resistance =   p  * (color3 );
                                 
                    
          printf( "\n\n\tResistance in ohms:\t%f\n", resistance );
      }

     return EXIT_SUCCESS;
}


