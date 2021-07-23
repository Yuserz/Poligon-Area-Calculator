#include <stdio.h>
#include <stdlib.h>

//for multiple use character
char C;



void quad(){
		
	int area;
	int c[4][2];
	int i,j;
	
			
			printf("\"QUADRILATIRAL\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<4;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}	
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<4;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) + (((c[3][0]*c[0][1])-(c[3][1]*c[0][0])))))));
		    area;

			//Getting the absolute value of the area 
			if(area < 0)
			         {
				printf("\nThe area of QUADRILATIRAL is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of QUADRILATIRAL is \"%d\"", area);
			}
			
			printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you, goodbye!");			
			}
					
	getch();
	return;
}



void penta(){
		
	int area;
	int c[5][2];
	int i,j;
		
			printf("\"PENTAGON\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<5;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);   
			     	}
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<5;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) + 
			(((c[3][0]*c[4][1])-(c[3][1]*c[4][0])) + ((c[4][0]*c[0][1])-(c[4][1]*c[0][0])))))))/2;
		    

			//Getting the absolute value of the area 
			if(area < 0)
			{
				printf("\nThe area of PENTAGON is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of PENTAGON is \"%d\"", area);
			}
			
			printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you goodbye!");			
			}
	getch();
	return;
}

void hexa(){
		
	int area;
	int c[6][2];
	int i,j;
		
			printf("\"HEXAGON\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<6;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		           if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
			    	}
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<6;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) +
			 (((c[3][0]*c[4][1])-(c[3][1]*c[4][0])) + ((c[4][0]*c[5][1])-(c[4][1]*c[5][0]) + (c[5][0]*c[0][1])-(c[5][1]*c[0][0])))))))/2;
		    

			//Getting the absolute value of the area 
			if(area < 0)
			{
				printf("\nThe area of HEXAGON is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of HEXAGON is \"%d\"", area);
			}
			
				printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you goodbye!");			
			}
	getch();
	return;
}

void hepta(){
		
	int area;
	int c[7][2];
	int i,j;
		
			printf("\"HEPTAGON\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<7;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);   
					}
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<7;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) +
				 (((c[3][0]*c[4][1])-(c[3][1]*c[4][0])) + ((c[4][0]*c[5][1])-(c[4][1]*c[5][0]) + (c[5][0]*c[6][1])-(c[5][1]*c[6][0]) +
				 (c[6][0]*c[0][1])-(c[6][1]*c[0][0])))))))/2;
		    

			//Getting the absolute value of the area 
			if(area < 0)
			{
				printf("\nThe area of HEPTAGON is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of HEPTAGON is \"%d\"", area);
			}
			
			printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you goodbye!");			
			}
	getch();
	return;
}


void octa(){
		
	int area;
	int c[8][2];
	int i,j;
		
			printf("\"OCTAGON\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<8;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);   
					}
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<8;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) +
				 (((c[3][0]*c[4][1])-(c[3][1]*c[4][0])) + ((c[4][0]*c[5][1])-(c[4][1]*c[5][0]) + (c[5][0]*c[6][1])-(c[5][1]*c[6][0]) +
				 (c[6][0]*c[7][1])-(c[6][1]*c[7][0]) + (c[7][0]*c[0][1])-(c[7][1]*c[0][0])))))))/2;
		    

			//Getting the absolute value of the area 
			if(area < 0)
			{
				printf("\nThe area of OCTAGON is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of OCTAGON is \"%d\"", area);
			}
			
			printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you goodbye!");			
			}
	getch();
	return;
}


void nona(){
		
	int area;
	int c[9][2];
	int i,j;
		
			printf("\"NONAGON\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<9;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		        	if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
		 
		        
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<9;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) +
				 (((c[3][0]*c[4][1])-(c[3][1]*c[4][0])) + ((c[4][0]*c[5][1])-(c[4][1]*c[5][0]) + (c[5][0]*c[6][1])-(c[5][1]*c[6][0]) +
				 (c[6][0]*c[7][1])-(c[6][1]*c[7][0]) + (c[7][0]*c[8][1])-(c[7][1]*c[8][0]) + (c[8][0]*c[0][1])-(c[8][1]*c[0][0])))))))/2;
		    

			//Getting the absolute value of the area 
			if(area < 0)
			{
				printf("\nThe area of NONAGON is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of NONAGON is \"%d\"", area);
			}
			
				printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you goodbye!");			
			}
	getch();
	return;
}

void deca(){
		
	int area;
	int c[10][2];
	int i,j;
		
			printf("\"DECAGON\"\n\n");
			//Request to enter coordinates
			printf("\tEnter the coordinates: \n\n");
			//Storing using 2d array
			for (i=0;i<10;i++)    
		    {    
		    	printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		           if(j==0){
		  		    printf("Enter x c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]);    
					}
					else{
		  		    printf("Enter y c[%d][%d]:\t",i,j);                
		            scanf("%d", &c[i][j]); 
		            }
		        } 
				printf("\n");  
		    }
		   //Show data
		   printf("x \ty\n");
		   for (i=0;i<10;i++)    
		    {   
				printf("\n"); 
		        for (j=0;j<2;j++)    
		        {    
		            printf("%d\t", c[i][j] );               
			
		        }  
			
		    }
		    printf("\n");
		    
		    //Solving the inputted coordinates
		    area=((((c[0][0]*c[1][1])-(c[0][1]*c[1][0])) + (((c[1][0]*c[2][1])-(c[1][1]*c[2][0])) + (((c[2][0]*c[3][1])-(c[2][1]*c[3][0])) +
				 (((c[3][0]*c[4][1])-(c[3][1]*c[4][0])) + ((c[4][0]*c[5][1])-(c[4][1]*c[5][0]) + (c[5][0]*c[6][1])-(c[5][1]*c[6][0]) +
				 (c[6][0]*c[7][1])-(c[6][1]*c[7][0]) + (c[7][0]*c[8][1])-(c[7][1]*c[8][0]) + (c[8][0]*c[9][1])-(c[8][1]*c[9][0]) + (c[9][0]*c[0][1])-(c[9][1]*c[0][0])))))))/2;
		    

			//Getting the absolute value of the area 
			if(area < 0)
			{
				printf("\nThe area of DECAGON is \"%d\"", area/-1);  
			}  
			else
			{
				printf("\nThe Area of DECAGON is \"%d\"", area);
			}
			printf("\n\n");
			printf("Press Any key to try again/ X to Exit: ");
			getchar();
			C=getchar();
			
			if(C!='x'){
			main();
			}
			else{
			printf("\t\n\n Thank you goodbye!");			
			}
	getch();
	return;
}


int main() {
	
	system("cls");
	char opt;
	printf("***SOLVING POLYGON***\n\n");
	printf("[1] Quadrilateral\n");
	printf("[2] Pentagon\n");
	printf("[3] Hexagon\n");
	printf("[4] Heptagon\n");
	printf("[5] Octagon\n");
	printf("[6] Nonagon\n");
	printf("[7] Decagon\n");
	printf("[X] Exit\n\n");
	printf("Enter your choice: ");
	
		
		opt = getch();
		switch(opt)
		{
			
			
		case '1':
			quad();		
		break;
			
		case '2':
			penta();
		break;

		case '3':
			hexa();	
		break;
		
		case '4':
			hepta();		
		break;
			
		case '5':
			octa();
		break;

		case '6':
			nona();	
		break;
		
		case '7':
			deca();	
		break;
		
		case 'X': case 'x':
			exit;
			
		break;
		
		default:
			printf("\n\nInvalid input \"%c\"", opt);
			printf("\t\"Press any key to try again\"");
			getch();
			main();	
			
		break;

	
	getch();
	return(0);
}
}
