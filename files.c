#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct files{
	
	int data;
	struct files *next;

}files;

files *file=NULL;


int afficher(files *laux){
 

 
     printf(" ======la file ======\n");
	while(laux!=NULL) {
		
     printf("        %d             \n",laux->data);
	
     laux=laux->next;
		
	}
		
	
}


void emfiler(int data){
	
	files *link=(files*)malloc(sizeof(files));
	link->data=data;
	
	link->next=file;
	file=link;	
}

void defiler(){
  files *laux=file;

  while(laux->next->next!=NULL){
  	laux=laux->next;
  } 
  laux->next=NULL;
  free(laux->next);
}




int main() {
   // push items on to the stack 
   int choix,val;
   printf("=======================progarme files !!!!============================= \n");
      
      
      do{
      	printf("tapez 1 pour emfiler \n 2 pour defiler \n 3 afichier \n 0 pour quitte\n choix:");
      	scanf("%d",&choix);
      	switch(choix){
      		case 1 : 
      		         printf("enter la valeur emfiler:");
      	             scanf("%d",&val);
      	             emfiler(val);
      	              break;
      	    case 2 :
      	    	    defiler();
      	            break;
      	    case 3 : afficher(file);
      	    	
      		         break;
		  }
      	
	  }while(choix!=0);
   
   
 


   return 0;
}
