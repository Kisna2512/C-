
def selectionSort(array):

  for i in range(len(array)):
   
    min_idx = i
    for j in range(i+1, len(array)):
        if array[min_idx] > array[j]:
            min_idx = j
     
    array[i], array[min_idx] = array[min_idx], array[i]




    print('Sorted Array using selection sort :')
    print(array)
   





def bSort(array):
    n = len(array)
    for i in range(n-1):
        for j in range(0, n-i-1):
 
            if array[j] > array[j + 1] :
                array[j], array[j + 1] = array[j + 1], array[j]





                print('Sorted Array in Ascending Order:')
                print(array)
            
    



n = int(input("Enter the size of an array:- ")) 
arr= [] 
for i in range(n): 
    arr.append(int(input("Enter elements in array:- " )))  



print('choose 1 for bubble sort and 2 for selection sort')
choice=int(input("Enter choice:- "))

if(choice==1):
    selectionSort(arr)
   
elif(choice==2):
    bSort(arr)

