import random
def Quick3(items, lo, hi):
    """
    Recursive sorting function with 3-way partitioning
    """
    if hi <= lo:
        return
    lt = lo
    gt = hi
    pivot = items[(hi+lo)//2]
    i = lo
    while i <= gt:
        if items[i] < pivot:
            items[lt], items[i] = items[i], items[lt]
            lt += 1
            i += 1
        elif items[i] > pivot:
            items[gt], items[i] = items[i], items[gt]
            gt -= 1
        else:
            i += 1
    print(items)
    Quick3(items, lo, lt - 1)
    Quick3(items, gt + 1, hi)
a = [1, 12, 5, 26, 7, 14, 3, 7, 2,4,4,4,7,7,7,7,7,7,7,7,7]
a = Quick3(a,0,len(a)-1)

	
