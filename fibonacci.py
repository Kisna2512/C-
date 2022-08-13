
def check(arr, x, n):
 

    fib2 = 0 
    fib1 = 1  
    fibM = fib2 + fib1  
    while (fibM < n):
        fib2 = fib1
        fib1 = fibM
        fibM = fib2 + fib1
 
    offset = -1
 
    while (fibM > 1):
 
        i = min(offset+fib2, n-1)
 
        if (arr[i] < x):
            fibM = fib1
            fib1 = fib2
            fib2 = fibM - fib1
            offset = i
 
        elif (arr[i] > x):
            fibM = fib2
            fib1 = fib1 - fib2
            fib2 = fibM - fib1
 
        else:
            return i
 
    if(fib1 and arr[n-1] == x):
        return n-1
 
    return -1

print("Enter the Number of students who attended the training program : ")
number=int(input())
Roll_No=[]
print("Enter the  Roll No of those students")
for i in range(1,number+1):
  x=int(input("Enter next roll number:- "))
  Roll_No.append(x)

print("Roll No of students who attended the training program are :- ")
print(Roll_No)


check_roll=int(input("Enter the roll no of student :- "))

if(check(Roll_No,check_roll,number)):
  print(f"The student {check_roll} attending the training program")
else:
  print(f"The student {check_roll}  is absent for training program")