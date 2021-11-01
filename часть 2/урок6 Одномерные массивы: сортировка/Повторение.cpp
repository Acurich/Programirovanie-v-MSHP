//Требуется найти все размеры сторон прямоугольного параллелепипеда, при которых его объём равен V. Размеры сторон — натуральные числа. Решения, полученные перестановкой размеров сторон требуется считать разными.
#include <iostream>
using namespace std;
int main(){
  int v;
  cin >> v;
  for(int i= 1; i <= v; i++)
    if(v%i == 0)
      for(int j = 1; j <= v; j++)
        if (v%j == 0)
          for(int k = 1; k <= v; k++)
            if (v % k == 0 && i*j*k == v)
              cout << i << " " << j << " " << k << endl;
}

//Требуется найти все размеры сторон прямоугольного параллелепипеда, при которых его объём равен V. Размеры сторон — натуральные числа. Решения, полученные перестановкой размеров сторон требуется считать одинаковыми.
#include <iostream>
using namespace std;
int main(){
  int v;
  cin >> v;
  for(int i= 1; i <= v; i++)
      for(int j = i; j <= v; j++)
          for(int k = j; k <= v; k++)
            if (v % k == 0 && i*j*k == v)
              cout << i << " " << j << " " << k << endl;
}
