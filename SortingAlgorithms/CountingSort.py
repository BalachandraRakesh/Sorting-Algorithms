##Count Sort Algorithm
#  1] Since the values range from 0 to k, create k+1 buckets.
#  2] To fill the buckets, iterate through the input list and
#  each time a value appears, increment the counter in its
#  bucket.
#  3] Now fill the input list with the compressed data in the
#  buckets. Each bucket's key represents a value in the
#  array. So for each bucket, from smallest key to largest,
#  add the index of the bucket to the input array and
#  decrease the counter in said bucket by one; until the
#  counter is zero.
def Count_Sort( aList):
    counter = [0] * len(aList)
    for i in aList:
      counter[i] += 1
 
    ndx = 0;
    for i in range( len( counter ) ):
      while 0 < counter[i]:
        aList[ndx] = i
        ndx += 1
        counter[i] -= 1
    return aList
		
a = [1,2,3,4,5,6,7,8,9,6,6,6,3,3,4,4,4,4,4,2,2,2,2,7,7,8,4]
a = Count_Sort(a)
print(a)
b = [1]*20 + [3]*15 + [7]*100
print(b)