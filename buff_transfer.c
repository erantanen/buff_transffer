#include <stdio.h>
#include "my_buff_function.h"




int  main(int argc, char *argv[])
{

     FILE  *filehandle_in;
     FILE  *filehandle_out;



   unsigned char *buffer_1 = (unsigned char *)malloc(20480);
   unsigned char *buffer_2 = (unsigned char *)malloc(20480);

    if(argc < 2 || argc > 4) {


      if((filehandle_in = fopen( argv[1], "r")) == NULL) {
           printf("\n 2 In correct usage,\n \' buff_transffer <input file> \'\n");
                 exit(1);
                } else {
                     filehandle_in = fopen( argv[1], "r");
                     filehandle_out = fopen("out_put.txt", "w");
                }
       
       







fclose(filehandle_in);
fclose(filehandle_out);

}

