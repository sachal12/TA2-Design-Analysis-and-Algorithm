

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool vertical(int arr[],int a){
    int i,j;
    for( i=0 ; i<a ; i++)
    {
        for( j=i+1 ; j<a ; j++)
        {
            if (arr[i] == arr[j])
            {
                return false;
                
            }
        }
    }
    return true;
}


bool diagonal(int arr[], int a){
    int i,j,m,n;
    for(int i=0 ; i<a ; i++)
    {
        int x1=i+1;
        int y1=arr[i];
        for(int j=i+1 ; j<a ; j++)
        {
            int x2=j+1;
            int y2=arr[j];
            
            m=x2-x1;
            n=y2-y1;
            
            int diffx;
            int diffy;
            
            if(x2-x1>0)
            diffx=x2-x1;
            else
            diffx=x1-x2;
            
            if(y2-y1>0)
            diffy=y2-y1;
            else
            diffy=y1-y2;
            
            if(diffx==diffy)
            return false;
            
            
            
            
            
        }
    }
    return true;
    
}


int main()
{
    int a,z,i,j,m;
    printf("enter the size of board  ");
    
    scanf("%d",&a);
    
    int matrix[a][a];
    
    for (int i = 1; i < a+1; i++) {
        for (int j = 1; j < a+1; j++) {
            matrix[i][j]=0;
        }
        
    }
    
    
    
    printf("enter the values at which you want to place queen from top to bottom ");
    
   
        // for ( j = 1; j < a+1; j++) {
        //     scanf("%d",&z);
        //     matrix[j][z]=1;
            
            
        // }
        
        int arr[a];
        // for(i=0 ; i<a ; i++)
        // {
        //     scanf("%d",&arr[i]);
           
            
        // }
        for(j=1 ; j<a+1 ; j++)
        {
            scanf("%d",&z);
            matrix[j][z]=1;
            arr[j-1]=z;
           
            
        }
        
        for (int i = 1; i < a+1; i++)
    {
        for (int j = 1; j < a+1; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
        
        
        
          
           
        
        
        
        
        
        for(i=0 ; i<a ; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
        if(vertical(arr,a)==false)
        printf("Not the solution from vertical ");
        else if(diagonal(arr,a)==false)
        printf("not the solution from diagonal");
        else
        printf("the solution exists");
        
         printf("\n");
        
        //diagonalcall
        
        
        
    
    
    for (int i = 1; i < a+1; i++)
    {
        for (int j = 1; j < a+1; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    // for (int i=1 ; i< a+1 ; i++)
    // {
    //     for (int j=1 ; j< a+1 ; j++)
    //     {
    //         if(matrix[i][j]==1)
    //         {
    //             for(i=1 ; i<a+1 ; i++)
    //             {
    //                 //if()   
    //             }
    //         }
    //     }
    // }
    
    
    
    
    
    
    return 0;
}


