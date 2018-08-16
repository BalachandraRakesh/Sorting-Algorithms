##Bubble sort Algorithm
def bubblesort(array):
	for i in range(len(array)):
		for j in range(0,len(array)-i-1): # Last i elements are already in place
			if(array[j] > array[j+1]):
				array[j],array[j+1] = array[j+1],array[j]
	print(array)
			
A = [23,12,1,45,65,67,87,21,19,0,4,3,8,89,76,99,123,22,7]
bubblesort(A)