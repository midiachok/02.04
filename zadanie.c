#include <stdio.h>

typedef struct{
     int nn;//pocet prvkov
     double *b[nn];
}mnozina;

int  main(){
	
	int nn,i;
	mnozina m;
	
	printf("zadajte pocet prvkov");
	scanf("%d",&m.nn);
	 
	m.b = (double *)malloc(m.nn * sizeof(double));
	 
     mnozina.nn=scanf("%d",mnozina.nn);
	for(i=0;i<nn;i++){
			mnozina.b[i]=scanf("%lf",mnozina.b[i]);
			printf("%lf",mnozina.b[i]);
		}
	
}
