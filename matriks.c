/**
 * @author  : Muhamad Rifki
 * @filename: matriks.c
 */
 
#include <stdio.h>

/* definisi fungsi */
void perkalian(void); 
void transpose(void);
void segitiga(void);
void identitas(void);

/* main program */
int main(void)
{
    /* panggil fungsi */
	// perkalian
	printf("\nPerkalian Matrik \n ============= \n");
	perkalian();
	// transpose
	printf("\n\nTranspose matrik \n ============= \n");
	transpose();
	// segitiga
	printf("\n\nSegitiga matrik\n ============= \n");
	segitiga();
	// identitas
	printf("\n\n Identitas Matrik \n ============= \n");
    identitas();
    	
	return(0);
	getchar();
}

// fungsi perkalian matrik
void perkalian(void)
{
    int i,j,k;
    int mathA[2][3] = {0,1,2,3,4,5};
    int mathB[2][3] = {0,1,2,3,4,5};
    int mathC[2][3] = {0};
    
    for (i=0; i<=1; i++) {
	    for (j=0; j<=2; j++) {
		    for (k=0; k<=2; k++) 
		        mathC[i][j] += mathA[i][k] * mathB[k][j];
	            printf ("[%d]", mathC[i][j]);
	    }   	
	    printf("\n");
	}
} 

// fungsi transpose matrik
void transpose(void)
{
    int inputBaris, inputKolom;
    int baris, kolom;
    int matrik[10][10], transpose[10][10];
 
    printf("Masukan jumlah baris: \n");
    scanf("%d",&inputBaris);
    
    printf("Masukan jumlah kolom: \n");
    scanf("%d",&inputKolom);

    // gunakan tab agar kolom teratur
    printf("Masukan elemen dari matrik \n");

    for (baris=0; baris < inputBaris ; baris++) {
      for (kolom=0; kolom < inputKolom; kolom++) {
         scanf("%d", &matrik[baris][kolom]);
      }
    }

    for (baris=0; baris < inputBaris; baris++) {
      for (kolom=0; kolom < inputKolom; kolom++) {
         transpose[kolom][baris] = matrik[baris][kolom];
      }
    }

    printf("Hasil transpose:-\n");

    for (baris=0; baris < inputKolom; baris++) {
      for (kolom=0; kolom < inputBaris; kolom++) {
         printf("%d\t",transpose[baris][kolom]);
      }  
      printf("\n");
    }
}

// fungsi segitiga matrik
void segitiga(void)
{
    int i,j;
    int matrik[3][3];
    
    // inputkan 9 elemen matrik
    printf("\nMasukan matriks:\n");
    for (i=0; i<3; i++) 
        for (j=0; j<3; j++)
        scanf("%d", &matrik[i][j]); 
    
    // cetak semua metrik
    printf("\nMatrik hasil inputan adalah:\n");
    for (i=0; i<3; i++) {
        printf("\n");
        for (j=0; j<3; j++) 
        printf ("%d", matrik[i][j]);
    }
    
    // ubah ke segitiga matrik
    printf("\nSegitiga metriknya adalah:\n");
    for (i=0; i<3; i++) {
        printf("\n");
        for (j=0; j<3; j++) 
            if (i<=j) {
                printf ("%d", matrik[i][j]);
            } else {
                printf ("%d", 0);
            }
        
    }
}

// fungsi matrik identitas
void identitas()
{
    int mathIden[100][100];
    int i,j,n;
     
    printf("Masukan nilai N untuk membuat matrik identitas\n");
    scanf("%d",&n);

    printf("\nMatrik identitasnya ialah:\n");
    for(i=0; i<n; i++) {
       for(j=0; j<n; j++) {
             if(i==j) {
                 mathIden[i][j]=1;
                 printf("%d ",mathIden[i][j]);
             } else {
                 mathIden[i][j]=0;
                 printf("%d ", mathIden[i][j]);
             }
       }
       printf("\n");
    }

}

