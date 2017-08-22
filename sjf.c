#include<stdio.h>

struct process{
int id;
int at;
int bt;
int ct;
int tat;
int wt;
};


void main(){
printf("Enter the number of process \n");
int p;
scanf("%d",&p);
struct process proc[p];

int i;

for(i=0;i<p;i++){								//Colecting info

	printf("Enter the process id of process %d \n",i+1);
	scanf("%d",&proc[i].id);
	proc[i].at=0;								// Arrival time is initialised to zero
       printf("Enter the Burst time of process %d \n",i+1); 
        scanf("%d",&proc[i].bt);
	}

printf("\n ---------------DISPLAYING INFO--------------------- \n");
										//Displaying the recieved info
for(i=0;i<p;i++){

	printf("%d \t",proc[i].id);
	printf("%d \t",proc[i].at);
	printf("%d \t",proc[i].bt);
	printf("\n\n");

	}

										// sort with Burst time
int j;
for(j=0;j<p;j++){
for(i=0;i<p-1;i++){

	struct process temp;
	if(proc[i].bt>proc[i+1].bt){
		temp=proc[i];
		proc[i]=proc[i+1];
		proc[i+1]=temp;
		}

	}
	}

printf("\n ---------------SORTED INFO after 1st sort--------------------- \n");
 

for (i=0;i<p;i++){								//  DISPLAY SORTED acc to burst time

        printf("%d \t",proc[i].id);
        printf("%d \t",proc[i].at);
        printf("%d \t",proc[i].bt);
        printf("\n\n");
		}





                                                                                // sort with Process id

for(j=0;j<p;j++){
for(i=0;i<p-1;i++){

        struct process temp;
        if(proc[i].bt == proc[i+1].bt){
		if (proc[i].id > proc[i+1].id){
                temp=proc[i];
                proc[i]=proc[i+1];
                proc[i+1]=temp;
		}
                }

        }
        }

printf("\n ---------------SORTED INFO after 2nd sort--------------------- \n");


for (i=0;i<p;i++){                                                              //  DISPLAY SORTED acc to process id

        printf("%d \t",proc[i].id);
        printf("%d \t",proc[i].at);
        printf("%d \t",proc[i].bt);
        printf("\n\n");
                }

printf("\n --------------- FINAL O/P --------------------- \n");

printf("ID \t AT \t BT \t CT \t TAT \t WT \t \n");
int ct;
int tat;
int wt;


for (i=0;i<p;i++){								// Calculation for ct tat and wt

int counter;
counter=0;

for (j=0;j<=i;j++){

counter = counter+proc[j].bt;

}
proc[i].ct=counter;
proc[i].tat=proc[i].ct-proc[i].at;
proc[i].wt=proc[i].tat-proc[i].bt;
}



for (i=0;i<p;i++){                                                              //  DISPLAY SORTED acc to process id

        printf("%d \t",proc[i].id);
        printf("%d \t",proc[i].at);
        printf("%d \t",proc[i].bt);
	printf("%d \t",proc[i].ct);
	printf("%d \t",proc[i].tat);
	printf("%d \t",proc[i].wt);

        printf("\n\n");
                }





}
