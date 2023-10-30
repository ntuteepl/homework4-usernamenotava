#include <stdio.h>
#include <iostream>  
using namespace std;  
  
int main() {  
 
    int data[6][3] =   
    {  
    {123, 456, 9000},  
    {456, 789, 5000},  
    {789, 888, 6000},  
    {336, 558, 10000},  
    {775, 666, 12000},  
    {566, 221, 7000}  
    };  
    int N; 
    cin >> N;  
    cin.ignore();   
    int acc, pw;  
    for(int i = 0;i < N;i++)  
    {  
        int f = 0;  
        cin >> acc >> pw;  
        for(int j = 0;j < 6;j++)  
        {  
            if(acc == data[j][0] && pw == data[j][1])  
            {  
                cout << data[j][2] << endl;  
            }  
            else  
            {  
                f++;  
            }  
        }  
        if(f == 6) 
        {  
            cout << "error" << endl;  
        }  
    }  
    return 0;  
}  
