#include <iostream>


using namespace std;

int main()
{
int n=1,x=0,f=1,i,aux=1;

while(n!=0){

cout<<"digite su numero"<<endl;
cin>>n;
cout<<n<<endl;

 if(n>1) {
for(i=n;i>1;i--){

  f=(f*(i));



}
cout<<f<<endl;
f=1;
}else{cout<<n<<endl;}


}

    return 0;
}

