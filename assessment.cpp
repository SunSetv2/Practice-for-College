#include<iostream>
#include<algorithm>
int gcd(int a[],int n){
   std::sort(a,a+n);
   int min = a[0],i,last,count = 0;
   for(i=1;i<=min;i++){ 
        for(int j = 0;j<n;j++){
            count++;
            if(a[j]%i!=0){
                count = 0;
                break;               
            }
    }  
    if (count == n){
        last = i ; 
        count = 0;
    }  
}

return last;
}
int main(){
int arr[] = {18,36,54,99};
std::cout<<gcd(arr,4)<<std::endl;
return 0;
}
