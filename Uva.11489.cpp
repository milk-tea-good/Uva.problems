//UVA 11489
#include<bits/stdc++.h>
using namespace std ;

string str ;
int number[15]={0} ;
long long int total=0 ;

int main(){
    int n ;
    while(cin>>n){
        for(int i=0;i<n;i-=-1){
            cin>>str ;
            for(int j=0;j<str.size();j-=-1){
                // 索引值0是數字1的個數
                // cout << (int)str[j] << endl ;
                number[str[j]-49]+=1 ;
                total+=(str[j]-48) ;
            }
            /*
            for(int j=0;j<10;j-=-1){
                cout << number[j] << " " ;
            }
            cout << endl ;
            cout << total << endl ;
            */
            if(total%3==0){
                if((number[2]+number[5]+number[8])%2==0)
                    cout << "Case " << i+1 << ": T" << endl ;
                else
                    cout << "Case " << i+1 << ": S" << endl ;
            }
            else{
                if((number[total%3-1]+number[total%3+3-1]+number[total%3+6-1])>0){
                    if((number[2]+number[5]+number[8])%2==0)
                        cout << "Case " << i+1 << ": S" << endl ;
                    else
                        cout << "Case " << i+1 << ": T" << endl ;
                }
                else
                    cout << "Case " << i+1 << ": T" << endl ;
            }



            //初始化
            memset(number, 0, sizeof(number)) ;
            total = 0 ;
        }
    }


}
