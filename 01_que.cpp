#include<iostream>
#include<math.h>
using namespace std;

// int main(){
//     int i=0;
//     int marks[]={25,23,45,45};

//     do
//     {
//         cout<<"the value of marks "<<i<<" is "<< marks[i]<<endl ;
//         i++;

//     }while(i < 4);


//     return 0;
// }

int main(){

    // int a,b=1;
    // a=10;
    // // if(++a){
    // //     cout<<b;
    // // }
    // // else{
    // //     cout<< ++b;
    // // }
    // // cout<< ++a <<endl;
    // // cout<< a  <<endl;
    // // cout<< a++  <<endl;

    // int a =1;
    // int b= a++;
    // int c= ++a;

    // // int b =2;
    
    // // if(a-- >0 || ++b>2){
    // //     cout<<"stage1 -inside if";
    // // }
    // // else{
    // //     cout<<"stage1 -inside else";
    // // }
    // // cout<<a<<" "<<b<< endl;
    // // cout<< (25 *(++a));
    // cout<<b<<endl;
    // cout<<c;

    // int n;
    // cout<<" enter the value of n"<<endl;
    // cin >>n;
    // bool isPrime = 1;
    // for(int i=2;i<n;i++){
    //     if(n%i == 0){
    //         isPrime=0;
    //         break;
    //     }
    // }
    // if(isPrime == 0){
    //     cout<<"not a prime number"<<endl;
    // }
    // else{
    //     cout<<"a prime number"<<endl;


    // for(int i=0; i<=15;i+=2){
    //     cout<< i << " ";

    //     if( i&1){
    //         continue;
    //     }
    //     i++;
    // }

    // for(int i=0 ;i<5;i++){
    //     for(int j=i; j<=5;j++){
    //         cout<<i << "*" << j <<endl;
    //     }
    // }
    int n;
    cout<<"enter the number"<<endl;
    cin>> n;

    int ans =0;
    int i=0;
    while(n!=0){
        int bit =n&1;
        ans=(bit *pow(10,i)+ans);

        n=n>>1;
        i++;
    }
    cout<<"Answer is "<<ans<<endl;
    
    return 0;
}