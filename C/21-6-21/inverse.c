#include <stdio.h>
#define N 2
 

void getCofactor(int mat[N][N], int temp[N][N], int p,int q, int n)
{
    int i = 0, j = 0;
 
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
 
               
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
 

int determinantOfMatrix(int mat[N][N], int n)
{
    int D = 0; 
 
    
    if (n == 1)
        return mat[0][0];
 
    int temp[N][N]; 
 
    int sign = 1; 
 
    
    for (int f = 0; f < n; f++)
    {
       
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f]
             * determinantOfMatrix(temp, n - 1);
 
       
        sign = -sign;
    }
 
    return D;
}
 

void display(int mat[N][N], int row, int col)
{
    printf("The given matrix is \n");	
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}
 

void inverse(int *,char);
int main()
{
 
 
    int arr[N][N] = { { 1, 2 },
                      { 3, 2 }};
 
    // Function call
    float tmp=arr[0][0];
    float det=determinantOfMatrix(arr, N);
    display(arr,N,N);
				
    inverse((int*)arr,N);
    arr[0][0]=tmp;
    
    printf("The matrix after inverse is \n");		
	for(char i=0;i<N;i++){
	for(char j=0;j<N;j++){
	printf("%.2f\t",arr[i][j]*det);
}
printf("\n");
}
	
    return 0;
}


void inverse(int *arr,char n){
for(char i=0;i<n;i++){
//swapping mechanism
*((arr +i*n)+0) += *((arr + 0)+i) ;
*((arr +0)+i)  = *((arr + i*n)+0) - *((arr +0)+i) ;
*((arr +i*n)+0)  = *((arr +i*n)+0) - *((arr +0)+i) ; 
//

if(i&1==1) *((arr + 0)+i) =*((arr + 0)+i) * -1;
}}

#ifdef test1
The given matrix is 
1	-3	2	-1	
0	0	0	5	
2	1	4	-3	
-1	0	5	0	
The matrix after inverse is 
30.00	-90.00	60.00	-30.00	
0.00	0.00	0.00	150.00	
60.00	30.00	120.00	-90.00	
-30.00	0.00	150.00	0.00	
#endif

#ifdef test2
The given matrix is 
1	0	2	
3	0	0	
2	1	4	
The matrix after inverse is 
6.00	-18.00	12.00	
0.00	0.00	0.00	
12.00	6.00	24.00	
#endif

#ifdef test3
The given matrix is 
1	2	
3	2	
The matrix after inverse is 
-4.00	12.00	
-8.00	-8.00	
#endif
