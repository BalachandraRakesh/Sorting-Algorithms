'''
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.
'''
## Selection Algorithm
def selectionsort(array):
	for i in range(len(array)):
		min_index = i
		for j in range(i+1,len(array)):
			if(array[min_index] > array[j]):
				min_index = j
		array[min_index],array[i] = array[i],array[min_index]
	print(array)
	
A = [7,4,8,2,5,67,12,65,87,78,68,90,65,131,34,14]
selectionsort(A)