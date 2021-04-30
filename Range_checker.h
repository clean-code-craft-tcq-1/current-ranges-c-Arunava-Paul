#ifndef RANGE_CHECK_H
#define RANGE_CHECK_H

#define DIFFERENCE_CHECK(x,y) (Return_Data_distance(x,y))
#define UPDATE 1
#define CHECK 0
static float Return_Data_distance(float a, float b )
{
	float c;
	c = a-b;
	if(c<0)
	{
		c*=(-1);
	}
	return c;
}

void rangeCheck(float *dataset_arr, unsigned int length_dataset);
int Print_Range(int start_idx , int end_idx , float* data_buff, int range_found, int objective);
int sanityCheck(float *buffer ,unsigned int buff_length );

#endif
