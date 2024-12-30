//Gulam Rasool-1159
#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int *p1, int* p2);       //Declaring Assembly function with parameter 

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int sum = 0;                                    //Declaring to store some Value
    int arr[10] = {1,-2,3,-4,5,-6,7,-8,9,-10};      //declaring Array
    printf("assembly proc calling from  from C! \n");
    printf("Elements of array: ");
    for(int i = 0; i < 10;i++)                      //Showing elements of array
    {
        printf("%i , ",arr[i]);
    }
    
    getch();
    asmfunc(arr,&sum);                             //assembly proc calling with pass by reference
    printf("\nSum of Negative Numbers: %i",sum);   //showing Sum using C-variable
    
   
   getch();
    
    
    printf("\nback to  C!");                         // printing in c    
    
  
    
    return 0;
}