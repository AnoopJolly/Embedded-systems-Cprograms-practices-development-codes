// matrix multiplication
#include<stdio.h>
int a[2][3]={{1,2,3},
              {4,5,6}};
int b[3][2]={{7,8},
             {9,10},
             {11,12}};
             
 //c[i][j]=a[i][0]*b[0][j]+
  //        a[i][1]*b[1][j]            
//          a[i][n-1]*b[n-1][j]; it is computed as like this

int c[2][2]={0};

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<3;k++){
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
}
for(int i=0;i<2;i++){
 for(int j=0;j<2;j++){
   printf("%d ",c[i][j]);
}

printf("\n");
}
return 0;
}





