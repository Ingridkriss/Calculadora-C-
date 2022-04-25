#include <iostream>

using namespace std;

    string DecimalParaBinario(int number){

    string conversion;
    while(number){
    if(number & 1)
        conversion+='1';
    else
        conversion+='0';
    number>>=1;
    }
    return conversion;
}

void reverse(string str)
{
  for(int i = str.size()-1; i>=0; i--)
   cout<< str[i];
}

int main() {
    int num;
    cout<<"Digite o numero decimal para converter para binário: ";
    cin>>num;
    cout<< "Binário do número " + to_string(num) + " é: ";
        reverse(DecimalParaBinario(num));
    return 0;
}


