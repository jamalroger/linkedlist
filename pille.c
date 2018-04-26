//this files is writing by jamal jamal roger | ESTSB 

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct piles{
	
	int data;
	struct piles *next;

}piles;

piles *pile=NULL;


int afficher(piles *laux){
 

 
     printf(" ======la pile ======\n");
	while(laux!=NULL) {
		
     printf("        %d             \n",laux->data);
	
     laux=laux->next;
		
	}
		
	
}


void empiler(int data){
	
	piles *link=(piles*)malloc(sizeof(piles));
	link->data=data;
	
	link->next=pile;
	pile=link;	
}

void depiler(){
	
  pile=pile->next;

}




int main() {
   // push items on to the stack 
   int choix,val;
   printf("=======================progarme piles !!!!============================= \n");
      
      
      do{
      	printf("tapez 1 pour empiler \n 2 pour depiler \n 3 afichier \n 0 pour quitte\n choix:");
      	scanf("%d",&choix);
      	switch(choix){
      		case 1 : 
      		         printf("enter la valeur empiler:");
      	             scanf("%d",&val);
      	             empiler(val);
      	              break;
      	    case 2 :
      	    	    depiler();
      	            break;
      	    case 3 : afficher(pile);
      	    	
      		         break;
		  }
      	
	  }while(choix!=0);
   
   
 


   return 0;
}
