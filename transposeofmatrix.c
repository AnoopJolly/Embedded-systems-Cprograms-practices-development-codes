// transpose of a matrix
# inclide<stdio.h>
int main()
{
int a[2][3]={{11,21,14},
             {51,16,17}};
             
             
int transpose [3][2];

for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        transpose[j][i]=a[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",transpose[i][j]);
    }
    printf("\n");
}
return 0;
}
