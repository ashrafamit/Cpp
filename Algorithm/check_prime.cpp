#include<bits/stdc++.h>
using namespace std;

int checkPmime(int n){

  int i, m=n/2, flag=1;

  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          flag=0;
          break;
      }
  }

  if (flag==1)
      return flag;
}

int main()
{
    string n;
    int chk;

    cout<<"Enter # to TERMINATE"<<endl;

    while(1){
        cout<< "Enter a number to check Prime number : ";
        cin>>n;

        if(n=="#"){
            break;
        }

        chk=checkPmime(stoi(n));

        if(chk==1){
            cout<<n<<" is a prime number."<<endl;
        }else{
            cout<<n<<" is not a prime number."<<endl;
        }
    }

return 0;
}
