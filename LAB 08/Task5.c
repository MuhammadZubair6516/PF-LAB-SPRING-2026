#include <stdio.h>
int main()
{
    int a[5][5], b[5][5];
    int r,c,i,j;
    
    int zero=1,identity=1,diagonal=1,scalar=1;
    int upper=1,lower=1,symmetric=1,skew=1;
    int equal=1;
    
    printf("Enter rows and columns (max 5): ");
    scanf("%d %d",&r,&c);

    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("\nMatrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){

            if(a[i][j]!=0) zero=0;

            if(i==j){
                if(a[i][j]!=1) identity=0;
            }else{
                if(a[i][j]!=0) identity=0;
            }

            if(i!=j && a[i][j]!=0) diagonal=0;

            if(i!=j && a[i][j]!=0) scalar=0;
            if(i==j && a[i][j]!=a[0][0]) scalar=0;

            if(i>j && a[i][j]!=0) upper=0;

            if(i<j && a[i][j]!=0) lower=0;

            if(r==c){
                if(a[i][j]!=a[j][i]) symmetric=0;
                if(a[i][j]!=-a[j][i]) skew=0;
            }
        }
    }

    printf("\nMatrix Types:\n");

    if(r==c) printf("Square Matrix\n");
    else printf("Rectangular Matrix\n");

    if(zero) printf("Zero Matrix\n");
    if(zero) printf("Null Matrix\n");

    if(identity) printf("Identity Matrix\n");

    if(diagonal && r==c) printf("Diagonal Matrix\n");

    if(scalar && r==c) printf("Scalar Matrix\n");

    if(upper && r==c) printf("Upper Triangular Matrix\n");

    if(lower && r==c) printf("Lower Triangular Matrix\n");

    if(symmetric && r==c) printf("Symmetric Matrix\n");

    if(skew && r==c) printf("Skew-Symmetric Matrix\n");
    if(r==c){
        int det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
                - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
                + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
        if(det==0) printf("Singular Matrix\n");
        else printf("Non-Singular Matrix\n");
    }
    if(r==1) printf("Row Matrix\n");
    if(c==1) printf("Column Matrix\n");
    printf("\nEnter another matrix to check equality:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]!=b[i][j])
                equal=0;
    if(equal) printf("Both matrices are Equal\n");
    else printf("Matrices are not Equal\n");
}
