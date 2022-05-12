#include <stdio.h>
void findrepeated(int arr[], int n);  // find the repeated elements

int main()
{
    int arr[50];
    int i, size;

    scanf("%d", &size); // Size of the Array is taken from the test case

  
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]); //Array elements are taken from test case
    }
   
  findrepeated(arr, size); //You have to write this function

/*  Write the above function which finds the repeated elements and prints the desired output.
Use the printf statement as 
  printf("Total repeated elements = %d\n", variable_name);
  printf("Repeated elements are: ");
  printf("%d ",variable); //use loop to print the elements seperated by a blank space as per the printf statement. 
 */
 
return 0;
}

void findrepeated(int arr[], int n){
	
  int i,j=0,k,count=0, rarr[n];
  
  for(k=0;k<n;k++)
    rarr[k]=0;
  
  for(i=0;i<n;i++){
  
    for(j=i+1;j<n;j++){
    
      if(arr[i]==arr[j]){
      
       count++;
       rarr[i]=arr[i];
      }
    }
  }
  
  printf("Total Repeated elements = %d\n",count);
  
  printf("Repeated elements are: ");
  
  for(k=0;k<n;k++){
  
    if(rarr[k!=0])
      printf("%d ",rarr[i]);
  
  }
}