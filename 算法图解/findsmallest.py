def findsmallest(arr):
	smallest = arr[0]				#存储最小的值
	smallest_index = 0				#存储最小元素的索引
	for i in range(1,len(arr)):
		if arr[i] < smallest:
			smallest = arr[i]
			smallest_index = i
	return smallest_index



def selectionsort(arr):				#对数组进行排序
	newarr = []		
	for i in range(len(arr)):
		smallest = findsmallest(arr)
		newarr.append(arr.pop(smallest))	#找出数组中最小的元素，并将其加入到新数组中
	return newarr

print selectionsort([5,3,6,2,10])