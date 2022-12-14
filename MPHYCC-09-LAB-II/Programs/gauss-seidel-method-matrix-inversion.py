# Python - Program for matrix-inversion using Gauss-seidel Method.

#-------Imports-----------------
import numpy as np
from scipy.linalg import solve

#-------Inputs------------------
A = eval(input("Enter the matrix A : "))              # As np.array([[a11, a12], [a21, a22]])
B = eval(input("Enter the matrix B : "))              # As [b1, b2]
X = eval(input("Enter initial guess X : "))           # As [x1, x2]
n = eval(input("Enter the number of iteration : "))   # Integer input.

#------Calculation--------------
L = np.tril(A)
U = A-L

for i in range(n):
  X = np.dot(np.linalg.inv(L), B-np.dot(U,X))

#--------Output-----------------
print()
print("Solution using Gauss-Seidel Method : ", X)
print()
print("Solution using Solve Syntax : ", solve(A,B))