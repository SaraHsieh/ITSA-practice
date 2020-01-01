#include <stdio.h>
#define MAX 50000
int main() 
{
    int A[MAX], B[MAX], C[2*MAX], num_A, num_B, i, count, x, y, z, ncase; /*num_A is the size of maxtrix A¡Anum_B is the size of maxtrix B*/
    scanf("%d", &ncase);
    while(ncase--)
    {
        x = 0; y = 0; z = 0; count = 0;   /*x,y,z are the position which have stored data for A,B,C*/
        scanf("%d", &num_A);
        num_B = num_A;
        for(i=0;i<num_A;i++)  /*input A*/
            scanf("%d", &A[i]);
        for(i=0;i<num_B;i++)  /*input B*/
            scanf("%d", &B[i]);

        while(x < num_A  &&  y < num_B)
	{ /*merger two lists*/
            if(A[x] <= B[y])
                C[z++] = A[x++];
            else
                C[z++] = B[y++];
            count++;
        }
        
        if(x == num_A) /*deal with the left data*/
            while(y < num_B)
                C[z++] = B[y++];
        else
            while(x < num_A)
                C[z++] = A[x++];
        printf("%d\n", C[num_A-1]);
    }
    return 0;
}