#include <iostream>
/*    Names:Cyiza Mugabo Christian 
Github:https://github.com/cyizaslashes

  */
using namespace std;
void bubblesort(){
 
 int i,j, num[15],n;
 
 cout<<"Enter Maximum size of your array(max 15):";
 cin>> n;
 cout<< endl;
 cout<< "Enter" <<"  " << n << " "<<"numbers of the array:";
 cout<< endl;
 	
for (int i=0;i < n;i++){
 	 	cin>>num[i];
}
//displaying the unsorted list
cout<<"This is the unsorted array" <<endl;
  for (int i=0;i < n ;i++){
cout<<num[i]<<"  ";
cout<<endl;
 	 }
 	 //for loop for sorting 
	for(int i=0;i< (n-i-1);i++){
 	 	
 	 	
 	 	for(int j=i+1;j< (n-1);j++){
 	 		
            int temp;
 	 		if(num[i] < num[j]){
 	 			  int temp=num[i];
 	 			  num[i]=num[j];
 	 			  num[j]= temp;
 	 			
 	 			
			  }
		  }
 	 	
	  }

cout<<"\nArray Sorted Successfully! in Descending order\n";
    cout<<"\nThe New Array is: \n";
    //displayig the sorted array
    for(i=0; i<n; i++)
        cout<<num[i]<<" ";
        cout<<endl;
    
}

 int main(){
   bubblesort();
return 0;
 }
