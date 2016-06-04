#include <iostream>
using namespace std;
void shift_down( float a, int i, int j)
{
    bool done = false;
    int max;

    while ((i * 2 + 1 < j) && (!done))
    {
        if (i * 2 + 1 == j - 1)
            max = i * 2 + 1;
        else if( a[i * 2 + 1] > a[i * 2 + 2])
            max = i * 2 + 1;
        else
            max = i * 2 + 2;

        if( a[i] < a[max])
        {
            swap( a[i], a[max]);
            i = maxChild;
        }
        else
            done = true;
    }
}
void heap_sort( float a)
{
	int i;
	typename T::size_type size = a.size();

	for (i = size / 2 - 1; i >= 0; i--)
		shift_down(a, i, size);

	for (i = size - 1; i >= 1; i--)
	{
		std::swap( a[0], a[i]);
		shift_down( a, 0, i);
	}
}




//Cockyail
#include <cstddef>
#include <utility>

template<typename T>
void shaker_sort(T array[], std::size_t size)
{
    for (std::size_t left_idx = 0, right_idx = size - 1;
         left_idx < right_idx;)
    {
        for (std::size_t idx = left_idx; idx < right_idx; idx++)
        {
            if (array[idx + 1] < array[idx])
            {
                std::swap(array[idx], array[idx + 1]);
            }
        }
        right_idx--;

        for (std::size_t idx = right_idx; idx > left_idx; idx--)
        {
            if (array[idx - 1] >  array[idx])
            {
                std::swap(array[idx - 1], array[idx]);
            }
        }
        left_idx++;
    }
}
