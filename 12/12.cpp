#include <iostream>
#include <forward_list>
using namespace std;

void divisors(int n, forward_list<int> divisors, int* l){
  for(int i = 1 ;  i < n / i ; i += 1){
    if(n % i == 0){
      divisors.push_front(i); 
      *l+=1;
      if(n / i != i){
        divisors.push_front(n / i);
        *l+=1;
      }
    }
  }
}

int main() {
    forward_list<int> divs;
    int div_length;
    int max = 0;
    int i = 1;
    int s = 0;
    while(1) {
        s += i;
        div_length = 0;
        divisors(s, divs, &div_length);
        if(div_length > max){
            cout << i << ": " << s << ' ' << div_length << '\n';
            max = div_length;
        }
        if(div_length >= 500){
            exit(1);
        }
        divs.clear();
        i+=1;
    }
}
