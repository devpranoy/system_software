					//fIFIO
#include<stdio.h>
struct schedule{
	int pno; 	// Process no
	int at; 	// Arrival TIME
	int bt;		// Burst Time
	int tat;

} ;

void main(){

	int p; // Process ID
	printf("Enter the no of process ");
	scanf("%d",&p);

	struct	schedule s[p], strtemp; //Key  of structure 

	int j=0;			// Entering values to structure
	int i =0;
	int temptat;
	int temp;
	for (i=0;i<p;i++){
		printf("\nEnter the process id of process ");
		printf("%d",i+1);
		printf("\n");
		scanf("%d",&s[i].pno);

		printf("\nEnter the Arrival tIME\n");
		scanf("%d",&s[i].at);

		printf("\nEnter the Burst tIME\n");
		scanf("%d",&s[i].bt);
	}

		// Printing GAntt chart
	printf("\n\t\tPNO \t AT \t BT\n");
	for (i=0;i<p;i++){
                printf("\t\t%d \t %d \t %d",s[i].pno,s[i].at ,s[i].bt);
		printf("\n\n");
	}

//-------------------------------------------------------------Sorting
	int sortedarr[p];
	for(j=0;j<p-1;j++){
	for(i=0;i<p-1;i++){
		if (s[i].at > s[i+1].at){
				strtemp =s[i];
				s[i]=s[i+1];
				s[i+1]=strtemp;
		}
		else if (s[i].at==s[i+1].at){
			if (s[i].pno>s[i+1].pno){
				strtemp =s[i];
			 	s[i]=s[i+1];
        		 	s[i+1]=strtemp;
			}
		}

	}
	}

//-------------------------------------------------------------- Printing GAntt chart After sorting
	printf("\n\n\n After sorting");
        printf("\n\t\tPNO \t AT \t BT\n");
        for (i=0;i<p;i++){
                printf("\t\t%d \t %d \t %d",s[i].pno,s[i].at ,s[i].bt);
                printf("\n\n");
        }
//---------------------------------------------------------------- Tat calculation 

	int ct=0;
	for (i=0;i<p;i++){
	ct =ct+s[i].bt;
	s[i].tat=ct-s[i].at;
	s[i].wt=s[i].tat-s[i].bt;
	}

        printf("\n\n\n After calculation of tat and ct");
        printf("\n\t\tPNO \t AT \t BT \t TAT \t ");
        for (i=0;i<p;i++){
                printf("\t\t%d \t %d \t %d",s[i].pno,s[i].at ,s[i].bt);
                printf("\n\n");
        
