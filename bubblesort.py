def bSort(arr):
    n = len(arr)
 

    for i in range(n-1):
   
 
  
        for j in range(0, n-i-1):
 
            if arr[j] > arr[j + 1] :
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
  

n = int(input("Enter the size of an array:- ")) 
arr= [] 
for i in range(n): 
    arr.append(int(input("Enter elements in array:- " )))    



bSort(arr)
print('Sorted Array in Ascending Order:')
print(arr)