
typedef struct node{
	
	int data;
	struct node *next;
	
	
}node;

node *head=NULL,*laux=NULL;
int sivide(){
	
	
	return head== NULL;
}
int printNode(node *laux){
  int i=1;	
  	printf("-----list des valeur----- \n");
	while(laux!=NULL) {
		

     printf("la valeur %d est : %d \n",i,laux->data);
	
     laux=laux->next;
		
	}
	
}


void insertFirst(int data){
	
	node *link=(node*)malloc(sizeof(node));
	link->data=data;
	
	link->next=head;
	head=link;	
}


void insertAfter(int data){
	
	laux=head;
	node *link=(node*)malloc(sizeof(node));
	link->data=data;
	 
if(sivide()) {
	head=link;
	head->next=NULL;
	
}else{
	
	while(laux->next!=NULL) laux=laux->next;
	
	laux->next=link;
	link->next=	NULL;
	
}
	
	
}

 int  compter(node *laux){
 	laux=head;int i=0;
 	while(laux->next!=NULL) 
	 {
	 	
	 laux=laux->next;	
	 i++;	
	 }
 	
 	return i+1;
 }
 
int vPetit(node *Laux){
    node *lauxL=head;laux=head;
    int i=0;
	while(lauxL!=NULL){
		
    	for(laux=head;laux!=NULL;laux=laux->next) {
		
		if( lauxL->data <= laux->data ) i++;	 
		   if ( i == 6 ) return lauxL->data;
		}	
	
          i=0;
	  lauxL=lauxL->next;
	  
	}
		
}
int vGrand(node *Laux){
    node *lauxL=head;laux=head;
    int i=0;
	while(lauxL!=NULL){
		
    	for(laux=head;laux!=NULL;laux=laux->next) {
		
		if( lauxL->data >= laux->data ) i++;	 
		   if ( i == 6 ) return lauxL->data;
		}	
	
          i=0;
	  lauxL=lauxL->next;
	  
	}
		
}


 
int somme(node *laux) {
	
  laux=head;int sm=0;
  
  
  while(laux!=NULL) {
  	 sm+=laux->data;
  	laux=laux->next;
  }
	
	return sm;
	
}
void menu(){
	
printf("tapez: \n              1 pour insertion on tete \n");
printf("	      2 pour insertion on queue \n");
printf("	      3 afficher la list\n");
printf("	      4 la somme de la list \n");
printf("	      5 la valeur la plus petite  de la list \n");
printf("	      6 la valeur la plus grand  de la list \n");
printf("	      7 la taille  de la list \n");	
	
	
	
}
 
 
