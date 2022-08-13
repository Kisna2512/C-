A = [[1, 7, 3],
    [4, 5, 6],
    [7, 8, 3]]
 
  
B = [[5, 4, 1 ],
    [1, 7, 3],
    [2, 5, 2]]
     
C = [[0, 0, 0],
        [0, 0, 0],
        [0, 0, 0]]
 

for i in range(len(A)):
 
    
    for j in range(len(B[0])):
 
        
        for k in range(len(B)):
            C[i][j] += A[i][k] * B[k][j]
 
for r in C:
    print(r)

#transpose of matrix
def trans(p,q):
  
    for i in range(3):
        for j in range(3):
            q[i][j] = p[j][i]


p = [ [1, 3, 1],
    [2, 5, 2],
    [3, 9, 3],]
    
   
   
q = p[:][:]
# q=[][]
trans(p, q)
   
print("transposed  matrix is")
for i in range(3):
    for j in range(3):
        print(q[i][j], " ", end='')
    print()    