#include <iostream> 

using namespace std; //deklarasi namespace agar memudahkan penggunakan fungsi cin dan cout tidak lagi menambahi diawal kata cout & cin dengan penulisan std ";)

void bubbleSort(int arr[], int n){ //deklarasi fungsi void bubbleSort dengan menerima inputan arr dan r yang bertipe integer
  int i, j, tmp; //deklarasi variable i dan j untuk perulangan sedangkan tmp untuk varible penukaran sementara
  for (i = 0; i < n; i++){ /*perulangan sebanyak n dan perulangan sebanyak nilai variable n dikurang i dan dikurang satu */
    for (j = 0; j < n - i - 1; j++){ 
      if (arr[j] > arr[j + 1]){  /*cek kondisi dengan menggunakan if jika nilai variable arr pada index ke j lebih besar dari nilai varible arr pada index ke j+1 maka melakukan penukaran nilai variable*/
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main(){
  int array[5], data_element, i, j; //mendeklarasi variable array, n, i dan j bertipe integer
  cout << "Masukkan banyak elemen: "; /*melakukan input nilai dari user untuk variable n yang digunakan sebagai jumlah data */
  cin >> data_element;
  cout << "Masukkan nilai: \n"; /*melakukan input nilai dari user untuk variable array dari setiap data */
  for (i = 0; i < data_element; i++){
    cin >> array[i];
  }
  bubbleSort(array, data_element); //memanggil fungsi bubbleSort dengan memasukkan variable array dan n
  cout << "Hasil Array yang sudah di sorting:\n"; /*menampilkan hasil pengurutan bubbleSort */
  for (i = 0; i < data_element; i++){
    cout << "[" << array[i] <<"]" << " ";
  }
  cout << "\n";
  return 0;
}
