//================================
//  Álvarez Servín Ángel Rodrigo
//  ESFM IPN           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

void MEZCLA(int A[], int B[], int C[], int n){
	int i = 0, j = 0;	// 2 OE
	for (int k = 0; k<n; k++){	// 4 OE
		if (A[i]<B[i]){	// 3 OE
			C[k] = A[i];	// 3 OE
				i++;}	// 2 OE
		else {
			C[k] = B[j];	// 3 OE
			j++;}}}	// 2 OE
