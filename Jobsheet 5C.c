#include <stdio.h>
#include <conio.h>

main (){
	
printf ("Nama     : L.M.RYAS AMIN AKBAR\n");
printf ("Nim      : F1B019076\n");
printf ("Kelompok : 16\n\n");
	
int nim1 [2][2];
int nim2 [2][2];
int hasil [2][2];
int i, j;

printf ("Perkalian Matriks \n");
for (i = 0; i < 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &nim1[i][j]);
}
}
printf ("\n");
for (i = 0; i < 2; i++){
for (j = 0; j < 2; j++){
printf ("Masukkan nilai index %d, %d = ", i, j);
scanf ("%d", &nim2[i][j]);
}
}
printf ("\n");
for (i = 0; i < 2; i++){
for (j = 0; j < 2; j++){
hasil [i][j]=nim1[i][j]*nim2[i][j];
printf ("%d ", hasil[i][j]);
}
printf ("\n");
}
getch();
}
