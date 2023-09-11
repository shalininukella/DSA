//BRUTE FORCE
/*class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int i;
	    sort( arr, arr+n);
	    for (i=n-1; i>0;i--){
	        if(arr[i]!=arr[i-1]){
	            return arr[i-1];
	        }
	    }
	    if(i==0)
	    return -1;
	    // code here
	}
  };*/


//OPTIMAL in 2 loops
/*class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
  int max1=arr[0];
int max2=arr[0];
for(int i =1;i< n ;i ++){
    if(max1<arr[i]){
        max1=max(max1, arr[i]);
    }
}
for(int i=1;i< n  ;i ++){
    if(max2==max1){
        max2=arr[i];
        continue;
    }
    if(max2<arr[i] && arr[i]!=max1){
        max2=max(max2, arr[i]);
    }
}
if(max1!=max2)
return max2;
else return -1;
}
};*/

//optimal in one loop 

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
    int large=INT_MIN, sec_large=INT_MIN,c=0;
   //to find the second smallest 
	if(n<2){
	    return -1;
	}
	for(int i=0;i<n;i++){
	    
	   if( arr[i]==arr[i+1]){
	       c++;
	   } 
       if(arr[i]>large){
           sec_large=large;
           large=arr[i];
           
       }
       else if (arr[i]>sec_large && arr[i]!=large){
           sec_large=arr[i];
       }
   }
   if(sec_large == INT_MIN){
       return -1;
   }
   else{
   return sec_large;
}
}
};


// main khud likh le 
