/*mickelle risquez 23.858.883 seccion 3*/

#include <stdio.h>

int main(){
	 int i,suma,a,b;
	                                                                         
    printf("Introduce primer numero: ");
    scanf("%d",&a);
    printf("Introduce segundo numero: ");
    scanf("%d",&b);
	
    suma=0;                  
    for(i=1;i<a;i++)         
    {
        if(a%i==0)           
        {
           suma=suma+i;      
        }
    }
    if(suma==b)              
    {
       suma=0;
       for(i=1;i<b;i++)      
       {
           if(b%i==0)        
           {
              suma=suma+i;   
           }
       }
       if(suma==a)           
          printf("Son amigos",suma);
       else
          printf("No son amigos",suma);
    }
    else             
    {
       printf("No son amigos",suma);
    }

return 0;
}
