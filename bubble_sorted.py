# 初学者:纪伟军
"""冒泡排序"""
def bubble_sort(alist):
    for i in range(len(alist)-1):
        exchange = False
        for j in range(len(alist)-i-1):
            if alist[j] > alist[j+1]:
                alist[j],alist[j+1] = alist[j+1],alist[j]
                exchange = True
        print(alist)
        if not exchange:
            return
alist = [5,8,4,7,2,1,3,9,6]
bubble_sort(alist)
print(alist)