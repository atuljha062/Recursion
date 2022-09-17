#include<iostream>

using namespace std;

int cnt= 0;

//print name 5 times

//inside the function everything is occurring at O(1) and the functions are called n number of times, in space complexity we assume the stack space, so n instances of function waited in the stack to be executed, so the space complexity will also be O(N).
//Time Complexity - O(n)
//Space Complexity - O(n)

// void funName(int N,string name){

//     if(N<=0){
//         return;
//     }

//     cout<<name<<endl;

//     funName(N-1,name);
    
// }

//print linearly from 1 to N


// void funLinear(int i,int N){
//     if(i>N){
//         return;
//     }

//     cout<<i<<endl;

//     funLinear(++i,N);
// }

//time andspace complexity same as previous one.


//print from N to 1

// void printN(int N){
//     if(N==0){
//         return;
//     }

//     cout<<N<<endl;

//     printN(--N);
// }

//time andspace complexity same as previous one.


//Print linearly from 1 to N (But by Backtracking)

// void funBack1(int N){
//     if(N==0){
//         return;
//     }

//     funBack1(N-1);

//     cout<<N<<" ";

// }

//time andspace complexity same as previous one.


//Print from N to 1 (By Backtracking)

// void funBack2(int i,int N){
//     if(i>N){
//         return;
//     }

//     funBack2(i+1,N);

//     cout<<i<<" ";
    
// }

//sum of first n numbers

//parametrerized way

void sumOfN(int n, int sum){
    if(n==0){
        cout<<sum;
        return;
    }

    return sumOfN(n-1,sum+n);
}

//functional way

int sumOfN(int N){
    if(N==1){
        return 1;
    }

    return N+sumOfN(N-1);
}

int main()
{
    int n=5;
    cout<<sumOfN(n);
    return 0;
}
