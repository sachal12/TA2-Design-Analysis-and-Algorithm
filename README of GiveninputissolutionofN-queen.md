# TA2-Design-Analysis-and-Algorithm N Queen Problem
***
## Name:Sachal Hablani
## Roll No :59
## DAA N-Queen Problem
***
## Question
## 1) Design a Program to check if the given input is a valid solution of the N - Queen Problem.

## Approach
1) Take input from the user for the size of the board in variable a.
2) Define a 2d Matrix of (a * a) size and initalize all the values to zero using 2 for loops.
3) Taking user from the input in 1D array for the horizontal values of this part.
4) Also storing the answer in 2d matrix used later for printing the 2d matrix.
5) Checking if any of the vertical values are same if the values are same the queen will kill other queen in vertically it will return false and the program terminates if it returns true it checks for diagonal
6) We do not need to check for horizontal killing because we are taking differnt values for every  row
7) In else if checking the values in the diagonal if any queen is in any other queens diagonal. if it return true the solution is not valid else the solution is valid.
8) this condition |x2-x1|=|y2-y1| helps us in checking for the diagonals.
![20221127_010026](https://user-images.githubusercontent.com/93744891/204106076-97c40ace-e366-48cf-9dad-d609401da6f5.jpg)
9)If all the conditions give answer true then the solution is valid.
***
10)Printing the matrix using two for loops.
## Screenshot Ouput



![Screenshot (3287)](https://user-images.githubusercontent.com/93744891/204106418-d8f8beab-a353-4f6f-b719-7cd6e334667f.png)
There does not exist any solution for n less or qual than 3

![Screenshot (3288)](https://user-images.githubusercontent.com/93744891/204106481-f743baa7-59b8-4c80-be58-a8a4a08a7b9e.png)
Veritical Solution does not exist





![Screenshot (3289)](https://user-images.githubusercontent.com/93744891/204106511-6e38c41e-7375-4627-a4e3-a9ae6d0e5602.png)
Not the solution from diagonal
![Screenshot (3291)](https://user-images.githubusercontent.com/93744891/204106567-02297eb0-a0f3-4ce8-869c-b2387bb209c4.png)
Solution for 4*4 matrix
![Screenshot (3292)](https://user-images.githubusercontent.com/93744891/204106668-c41afc8b-b36d-44b2-886b-07a1ea815e22.png)
Solution for 6*6 matrix
![Screenshot (3293)](https://user-images.githubusercontent.com/93744891/204106799-f6775fef-e378-4dbd-956e-38ca60eb5ce4.png)

solution for 8*8 matrix








