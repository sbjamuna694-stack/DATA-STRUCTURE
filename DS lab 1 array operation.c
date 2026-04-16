#include<stdio.h>
int main(){
int arr[100],n,i,pos,value,choice,found;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
do{
    printf("\n----MENU----\n");
    printf("1.transversal\n2.insertion\n3.deletion\n4.searching\n5.exit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:   //transversal
        printf("array elements are:");
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
            }
            break;
    case 2:  //insertion
        printf("enter position and value:");
        scanf("%d%d",&pos,&value);
        for(i=n;i>=pos;i--){
            arr[i]=arr[i-1];
            }
            arr[pos-1]=value;
            n++;
            break;
    case 3: //deletion
        printf("enter position to delete:");
        scanf("%d",&pos);
        for(i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
            }
            n--;
            break;
    case 4:  //searching
        printf("enter elements to search:");
        scanf("%d",&value);
        found=0;
        for(i=0;i<n;i++){
            if(arr[i]==value){
                printf("elements found at position%d\n",i+1);
            found=1;
            break;
            }
        }
        if(found==0)
            printf("elements not found\n");
        break;
    case 5:   //exit
        printf("exiting\n");
        break;
        default:
        printf("invalid choice!\n");
        }
}while(choice!=5);
return 0;
    }
