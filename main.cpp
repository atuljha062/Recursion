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

// void sumOfN(int n, int sum){
//     if(n==0){
//         cout<<sum;
//         return;
//     }

//     return sumOfN(n-1,sum+n);
// }

//functional way

// int sumOfN(int N){
//     if(N==1){
//         return 1;
//     }

//     return N+sumOfN(N-1);
// }

// factorial of n


// int factorial(int N){
//     if(N==1){
//         return 1;
//     }

//     return N*factorial(N-1);
// }

//reverse an array:

//using 2 pointer

// int * rev(int arr[],int l,int r){
//     if(l>=r){
//         return arr;
//     }

//     int temp = arr[l];
//     arr[l] = arr[r];
//     arr[r] = temp;

//     return rev(arr,l+1,r-1);
// }

//using one variable only

// int * rev1(int arr[],int i, int n){
//     if(i>=n/2){
//         return arr;
//     }

//     swap(arr[i],arr[n-i-1]);

//     return rev1(arr,i+1,n);
// }

//check Palindrome string

//two pointer way

// bool checkPalin(string s, int l, int r){
//     if(l>=r){
//         return true;
//     }
    
//     if(s.at(l) != s.at(r)){
//         return false;
//     }
//     return checkPalin(s,l+1,r-1);

// }

//using one variable

bool checkPalin(string s, int i){
    int n = s.size();
    if(i>=n/2){
        return true;
    }
    
    if(s.at(i) != s.at(n-i-1)){
        return false;
    }
    return checkPalin(s,i+1);

}

int main()
{
    string s = "madam";
    int l = 0;
    int r = s.size()-1;

    int i=0;

    bool isPalin = checkPalin(s,i);

    if(isPalin){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }


    return 0;
}
