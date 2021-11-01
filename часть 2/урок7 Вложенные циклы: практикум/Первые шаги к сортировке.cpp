//Сортировка пузырьком предполагает попарное сравнение соседних элементов с последующей перестановкой. Начнем со сравнения.
//Определите, больше ли k-ый элемент (k+1)-го для данного массива размерностью n.
#include <iostream>
using namespace std;

int main(){
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int k;
  cin >> k;
  if (a[k + 1] < a[k])
    cout << "YES";
  else
    cout << "NO";
  return 0;
}

//Усложним код. Теперь, если k-ый элемент массива оказался больше (k+1)-го необходимо поменять их местами. Требуется вывести измененый массив.
#include <iostream>
using namespace std;

int main() {
  int n, a[100], tmp = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int k;
  cin >> k;
  if (a[k + 1] < a[k]) {
    tmp = a[k];
    a[k] = a[k + 1];
    a[k + 1] = tmp;
  }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }

    return 0;
  }

//Итак, мы научились проверять пару элементов и больший из них передвигать на одно место ближе к концу массива. Теперь давайте поочередно проверим сперва первый и второй элементы, затем второй и третий, третий и четвертый и т.д. При этом если элемент больше своего последующего соседа, их стоит поменять местами.
//В этой задаче требуется осуществить для элементов с первого по (n-1)-й сравнение со следующим элементом и поменять их местами, если данный соседний элемент не больше.
#include <iostream>
using namespace std;

int main() {
  int n, a[100], tmp = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
   for (int i = 0; i < n-1; i++) {
  if (a[i + 1] < a[i]) {
    tmp = a[i];
    a[i] = a[i + 1];
    a[i + 1] = tmp;
  }
   }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }

    return 0;
  }

//Мы осуществили алгоритм, гарантированно приводящий к «всплыванию на поверхность» одного «пузырька». Иначе говоря, к помещению в конец массива наибольшего элемента.
//При повторном вызове этого алгоритма ясно, что «всплывёт» второй по величине элемент. При том он не изменит положения самого последнего элемента, так как не больше его.
//Можно сделать вывод, что если мы повторим алгоритм n раз (где n — размерность массива), то все n элементов «всплывут» так «высоко», как смогут, и мы получим отсортированный массив.
//Реализуйте алгоритм сортировки пузырьком, повторив n раз алгоритм предыдущего шага.
#include <iostream>
using namespace std;

int main() {
  int n, a[100], tmp = 0;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n - 1; i++) {
      if (a[i + 1] < a[i]) {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
