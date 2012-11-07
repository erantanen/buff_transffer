#include "my_buff_func.h"



void buff_read(unsigned char* data_1, int d_length)
{



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


}

