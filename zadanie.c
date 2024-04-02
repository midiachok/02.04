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
	 
	printf("zadajte prvky mnoziny");
	for(i=0;i<m.nn;i++){
	    scanf("%lf",&m.b[i]);
     }
     
     printf("vasa mnozina:");
     for(i=0;i<m.nn;i++){
          printf("%lf\n",&m.b[i]);
     }
	
	free(m.b);
	
/*    mnozina.nn=scanf("%d",mnozina.nn);
	for(i=0;i<nn;i++){
			mnozina.b[i]=scanf("%lf",mnozina.b[i]);
			printf("%lf",mnozina.b[i]);
		}*/
	
}
