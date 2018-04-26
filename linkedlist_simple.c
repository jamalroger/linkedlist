
//this file is writting by jamal roger

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   // push items on to the stack 
   int choix,val;
   printf("==============progarme linked list simple !!!!===================\n");
      
      
      do{


		menu();
		
      	scanf("%d",&choix);
      	switch(choix){
      		case 1 : 
      		         printf("enter une valeur :");
      	             scanf("%d",&val);
      	             insertFirst(val);
      	              break;
      	    case 2 :
      	    	    printf("enter une valeur :");
      	             scanf("%d",&val);
      	             insertAfter(val);
      	              break;
      	    case 3 : printNode(head);
      	    	
      		         break; 
      	    	    
      	    	    
      	    case 4 : printf("la somme est : %d\n",somme(head));
      	    	
      		         break;
      		case 5 : printf("la valeur petit est : %d\n",vPetit(head));
      	    	
      		         break;
      		         
      	    case 6 : printf("la valeur grand est : %d\n",vGrand(head));
      	    	
      		         break;
      		case 7 : printf("la taille est : %d\n",compter(head));
      	    	
      		         break;

		  }
      	
	  }while(choix!=0);
	  

	

	return 0;
}
