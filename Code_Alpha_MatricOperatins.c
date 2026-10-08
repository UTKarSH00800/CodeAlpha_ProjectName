#include<stdio.h>

void addition(int a[2][2],int b[2][2]);
void multiplication(int a[2][2],int b[2][2],int c[2][2]);
void transpose(int a[2][2],int b[2][2],int c[2][2]);
int main()
{
    int a[2][2],b[2][2];
    int c[2][2]= {0};
    int choice;

    printf("\t[---Matrix Operations---]\n");
    printf("\t  [___For 2X2 matrix___]\n");
    printf("\n");
    for(int i=0; i<2; ++i) {
        for(int j=0; j<2; ++j) {
            printf("Enter a number of Matrix A: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<2; ++i) {
        for(int j=0; j<2; ++j) {
            printf("Enter a number of Matrix B: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nSelect an option.\n");
    printf("1.Addition\n");
    printf("2.Multiplication\n");
    printf("3.Transpose\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nSum of two matrices\n");
        addition(a,b);
        break;
    case 2:
        printf("\nMultiplication of two matrices\n");
        multiplication(a,b,c);
        break;
    case 3:
        printf("\nTranspose of Matrix A \n");
        transpose(a,b,c);
        break;

    default:
        printf("\nInvalid choice\n");
    }
    return 0;
}

void addition(int a[2][2],int b[2][2]) {
    for(int i=0; i<2; ++i) {
        for(int j=0; j<2; ++j) {
            printf(" %d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }

}

void multiplication(int a[2][2],int b[2][2],int c[2][2]) {
    for(int i=0; i<2; ++i) {
        for(int j=0; j<2; ++j) {
            for(int k=0; k<2; ++k) {
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[2][2],int b[2][2],int c[2][2]) {
    for(int i=0; i<2; ++i) {
        for(int j=0; j<2; ++j) {
            c[i][j]=a[j][i];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nTranspose of Matrix B \n");
    for(int i=0; i<2; ++i) {
        for(int j=0; j<2; ++j) {
            c[i][j]=b[j][i];
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}
