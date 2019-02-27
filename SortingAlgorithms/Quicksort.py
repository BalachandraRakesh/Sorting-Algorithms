import random
import sys
def partition(arr,low,high):
    print("start")
    i = ( low-1 )	# index of smaller element
    print(i)
    pivot = arr[high]     # pivot
    print(pivot)
    for j in range(low , high):
 
        # If current element is smaller than or
        # equal to pivot
        if   arr[j] <= pivot:
            print(arr[j],j)
            # increment index of smaller element
            i = i+1
            arr[i],arr[j] = arr[j],arr[i]
 
    arr[i+1],arr[high] = arr[high],arr[i+1]
    print("end",arr)
    return ( i+1 )
    
 
# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low  --> Starting index,
# high  --> Ending index
 
# Function to do Quick sort
def quickSort(arr,low,high):
    if low < high:
 
        # pi is partitioning index, arr[p] is now
        # at right place
        pi = partition(arr,low,high)
        print(pi)
        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
        print(arr)
    else:
        print("Error")

A = [23,12,1,45,65,67,87,21,19,0,4,3,8,89,76,99,123,22,7]
n = len(A)-1
quickSort(A,0,n)	
