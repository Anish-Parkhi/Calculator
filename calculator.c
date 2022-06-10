#include<stdio.h>
#include<math.h>
int main(){
    int a,b,choice;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    printf("enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division\nenter 5 for sin theta\nenter 6 for cos theta\n");
    scanf("%d",&choice);
    switch(choice){
        case (1): printf("%d",a+b);
        break;
        case(2): printf("%d",a-b);
        break;
        case (3): printf("%d",a*b);
        break;
        case (4): printf("%d",a/b);
        break;
        case(5):
        if (a>b)
        printf("%.3f",(float)a/(float)b);
        else 
        printf("enter correct values");
        break;
         case(6):
        if (a<b)
        printf("%.3f",(float)b/(float)a);
        else 
        printf("enter correct values");
        break;
        
         default: printf("Invalid");
    }
    return 0;
}