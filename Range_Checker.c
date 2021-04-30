#include"stdio.h"
#include "Range_checker.h"

void rangeCheck(float *dataset_arr, unsigned int length_dataset)
{
	static int idx = 0, range_start_idx = 0, range_end_idx = 0; 
	float diff ,range_start, max_same_range_diff = 2.0;
	int pattern_found = 0;
	int pattern_started = 0;
	if(sanityCheck( dataset_arr, length_dataset ) == 1)
	{
		for(idx = 1 ; idx <length_dataset ; idx ++ )
		{
			diff = DIFFERENCE_CHECK(dataset_arr[idx-1] , dataset_arr[idx]);
			if(diff < max_same_range_diff)
			{				
				/**update the new range start index**/
				range_end_idx = idx ; // Update the index
				pattern_started = 1;
				pattern_found = 1;
			}
			else
			{
				pattern_started = 0;
			}
			if( idx == (length_dataset-1))//last loop. So making the previous pattern end.
			{
				pattern_started = 0;
			}
			if(pattern_started == 0) /*only print if pattern sequence is not present*/
			{
				(void)Print_Range(range_start_idx , range_end_idx , dataset_arr , pattern_found, UPDATE);
				range_start_idx = idx ; // Update the index
			}
		}
		/**Be ready for next call- This Error found after failing test case**/
		idx = 0;
		range_start_idx = 0;
		range_end_idx = 0;
		/*************************************/
	}
}

int Print_Range(int start_idx , int end_idx , float* data_buff, int range_found, int objective)
{
	static int print_done = 0;
	int retVal = 0;
	if( objective == UPDATE )
	{
		if( (start_idx < end_idx ) && (range_found == 1) )
		{
			printf("Ranges are : %f - %f, total values : %d\n" , data_buff[start_idx] , data_buff[end_idx], (end_idx - start_idx));
			print_done =1;
		}
	}
	else
	{
		retVal = print_done;
		print_done = 0;
	}
	return retVal;
}



int sanityCheck(float *buffer ,unsigned int buff_length )
{
	int retVal;
	if((buffer == 0) || (buff_length < 2))
	{
		retVal = 0;
	}
	else
	{
		retVal = 1;
	}
	return retVal;
}

