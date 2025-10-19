#include <stdio.h>
#include <malloc.h>
int** get_matrix(char,char,int **);
void  matrix_mul(char,char,char,int **, int **);

int main(){
int **a;
int **b;
char row,col,row2,col2;
printf("Enter the rows and columns of first matrix : ");
scanf("%hhd",&row);
scanf("%hhd",&col);

//GET MATRIX A
a=get_matrix(row,col,a);

printf("\nEnter the rows and columns of secound matrix : ");
scanf("%hhd",&row2);
if(col!=row2) return 0;
scanf("%hhd",&col2);


//GET MATRIX B
b=get_matrix(row2,col2,b);
printf("\nFinal Matrix is : \n");

//MATRIX A * B
matrix_mul(row,row2,col2,a,b);



return 0;
}

void matrix_mul(char row,char row2,char col2,int **a,int **b){


for(char i=0;i<row;i++){

for(char j=0;j<col2;j++){
int sum=0;

for(char k=0;k<row2;k++){
sum += (*(*(a+i)+k)) * (*(*(b+k)+j));

}
printf("%d ",sum);
j++;
}
printf("\n");
}
}

int** get_matrix(char row,char col,int **p){
int **temp;
p=(int **)malloc(sizeof(int)*row);


for(char i=0;i<row;i++){
p[i]=(int *)malloc(sizeof(int)*col);
}

temp=p;
for(char i=0;i<row;i++){
for(char j=0;j<col;j++){
scanf("%d",&p[i][j]);}}

return temp;
}

#ifdef test1
Enter the rows and columns of first matrix : 3 2
1 1
2 2
3 3

Enter the rows and columns of secound matrix : 2 1
1 
1

Final Matrix is : 
2 
4 
6 
#endif


#ifdef test2
Enter the rows and columns of first matrix : 1 2
1 2

Enter the rows and columns of secound matrix : 2 1
2 1

Final Matrix is : 
4 
#endif



#ifdef test3
Enter the rows and columns of first matrix : 2 3
1 1 2
1 1 2

Enter the rows and columns of secound matrix : 3 2
1 1
2 2
1 1

Final Matrix is : 
5 5 
#endif
