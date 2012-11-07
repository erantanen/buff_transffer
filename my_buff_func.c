#include "my_buff_func.h"



void buff_read(unsigned char* data_1, int d_length)
{
	//Harshitha's code
	/*int count;
	FILE  *f;
	if((f = fopen("file0", "r"))==NULL)
	exit(1);
	while(!feof(f))
	{
		count=fread(buf1,1,16384,f);
		return buf1;
	}*/

}

int buff_move(unsigned char* data_1 ,unsigned char* data_2 , int d_length, int iterator)
{
	if(iterator < d_length){
		data_2[iterator] = data_1[iterator];
	}
	else{
		iterator = -1;
	}
	return iterator;
}

void buff_clean(unsigned char* data_2)
{
	//Harshitha's code
	/*FILE *fw=fopen("file1","a");
	fwrite(buf2,1,size,fw);
	*/
}

